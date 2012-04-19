/*
* Configuration of module: PduR (PduR_PbCfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    STM32_F107
*
* Module vendor:           ArcCore
* Generator version:       3.1.10
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#include "PduR.h"


#if PDUR_CANIF_SUPPORT == STD_ON
#include "CanIf.h"
#endif
#if PDUR_CANTP_SUPPORT == STD_ON
#include "CanTp.h"
#endif
#if PDUR_LINIF_SUPPORT == STD_ON
#include "LinIf.h"
#endif
#if PDUR_COM_SUPPORT == STD_ON
#include "Com.h"
#endif
#if PDUR_DCM_SUPPORT == STD_ON
#include "Dcm.h"
#endif
#if PDUR_J1939TP_SUPPORT == STD_ON
#include "J1939Tp.h"
#endif



PduRTpBufferInfo_type PduRTpBuffers[] = {
	{
		.pduInfoPtr = NULL,
		.status = PDUR_BUFFER_FREE,
		.bufferSize = 0
	}
};

PduRTpBufferInfo_type *PduRTpRouteBufferPtrs[] = {
   NULL
};


		
const PduRDestPdu_type PduRDestination_CanDB_Message_1_PduRDestination = {
		.DestModule = ARC_PDUR_COM,
		.DestPduId = COM_PDU_ID_CanDB_Message_1,
		.DataProvision = PDUR_DIRECT,
		.TxBufferRef = NULL
}; 		
const PduRDestPdu_type PduRDestination_CanDB_Message_2_PduRDestination = {
		.DestModule = ARC_PDUR_CANIF,
		.DestPduId = CANIF_PDU_ID_CanDB_Message_2,
		.DataProvision = PDUR_DIRECT,
		.TxBufferRef = NULL
}; 

const PduRDestPdu_type * const PduRDestinations_CanDB_Message_1[] = {		
	&PduRDestination_CanDB_Message_1_PduRDestination,
	NULL
};
const PduRDestPdu_type * const PduRDestinations_CanDB_Message_2[] = {		
	&PduRDestination_CanDB_Message_2_PduRDestination,
	NULL
};


const PduRRoutingPath_type PduRRoutingPath_CanDB_Message_1 = { 
	.SrcModule = ARC_PDUR_CANIF,
	.SrcPduId = CANIF_PDU_ID_CanDB_Message_1,
	.SduLength = 8,
	.PduRDestPdus = PduRDestinations_CanDB_Message_1
};	
const PduRRoutingPath_type PduRRoutingPath_CanDB_Message_2 = { 
	.SrcModule = ARC_PDUR_COM,
	.SrcPduId = COM_PDU_ID_CanDB_Message_2,
	.SduLength = 8,
	.PduRDestPdus = PduRDestinations_CanDB_Message_2
};	


const PduRRoutingPath_type * const PduRRoutingPaths[] = { 
	&PduRRoutingPath_CanDB_Message_1,
	&PduRRoutingPath_CanDB_Message_2,
	NULL
};


PduR_PBConfigType PduR_Config = {
	.PduRConfigurationId = 0,
	.RoutingPaths = PduRRoutingPaths,
	.TpBuffers = PduRTpBuffers,
	.TpRouteBuffers = PduRTpRouteBufferPtrs,
	.NRoutingPaths = 2
};
