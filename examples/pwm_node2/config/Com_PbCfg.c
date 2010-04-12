/* 
* Configuration of module Com (Com_PbCfg.c)
* 
* Created by: 
* Configured for (MCU): MPC551x
* 
* Module vendor:  ArcCore
* Module version: 1.0.0
* 
* 
* Generated by Arctic Studio (http://arccore.com)
*           on Mon Apr 12 17:47:44 CEST 2010
*/


#include "Com.h"
#include "stdlib.h"


/*
 * Group signal definitions
 */
const ComGroupSignal_type ComGroupSignal[] = {
	{
		.Com_Arc_EOL = 1
	}
};


/*
 * Signal definitions
 */
const ComSignal_type ComSignal[] = {
	{
		.ComHandleId = SetLedLevelRx,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComTransferProperty = TRIGGERED,
		
		
		.ComSignalInitValue = 0,
		.ComBitPosition = 7,
		.ComBitSize = 16,
		.ComSignalEndianess = BIG_ENDIAN,
		.ComSignalType = UINT16,
		
	},
	{
		.Com_Arc_EOL = 1
	}
};


/*
 * I-PDU group definitions
 */
const ComIPduGroup_type ComIPduGroup[] = {
	{
		.ComIPduGroupHandleId = RxGroup
	},
	
	{
		.Com_Arc_EOL  = 1
	}
};


/*
 * I-PDU definitions
 */
const ComIPdu_type ComIPdu[] = {
    
	{
		.ComIPduRxHandleId = LedCommandRx,
		.ComIPduCallout = NULL,
		.ComIPduSignalProcessing =  DEFERRED,
		.ComIPduSize =  8,
		.ComIPduDirection = RECEIVE,
		.ComIPduGroupRef = RxGroup,
		
		.ComIPduSignalRef = {
			
			&ComSignal[ SetLedLevelRx ],
					
			NULL,
		},
	},   
	{
		.Com_Arc_EOL = 1
	}
};

const Com_ConfigType ComConfiguration = {
	.ComConfigurationId = 1,
	.ComIPdu = ComIPdu,
	.ComIPduGroup = ComIPduGroup,
	.ComSignal = ComSignal,
	.ComGroupSignal = ComGroupSignal
};


