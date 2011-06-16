/*
* Configuration of module: Rte (Rte_Tester.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    TMS570
*
* Module vendor:           ArcCore
* Generator version:       0.0.9
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Wed Jun 15 15:06:41 CEST 2011
*/

/* Rte_Tester.c */
#include <string.h>
#include "Os.h"
#include "Rte_Tester.h"
#include "Rte_Data.h"
#include "Rte_Calculator.h"
#include "Com.h"

extern Rte_CDS_Tester Rte_Inst_Tester;

UInt8 Rte_IRead_TesterRunnable_Arguments_arg1() {
	return Rte_Inst_Tester.TesterRunnable_Arguments_arg1->value;
}

UInt8 Rte_IRead_TesterRunnable_Arguments_arg2() {
	return Rte_Inst_Tester.TesterRunnable_Arguments_arg2->value;
}

void Rte_IWrite_TesterRunnable_Result_result(UInt16 Value) {
	/** Note: this API is required to be called during execution of runnable TesterRunnable. If this API is not called invalid data will be written back to the RTE buffers. See note on page 113 of the AUTOSAR RTE specification. */
	Rte_Inst_Tester.TesterRunnable_Result_result->value = Value;
}

Std_ReturnType Rte_Call_Tester_Calculator_Multiply(const UInt8 arg1,
		const UInt8 arg2, UInt16* result) {
	return Rte_Multiply(arg1, arg2, result);
}

