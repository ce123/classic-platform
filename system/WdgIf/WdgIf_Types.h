/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------
 * WdgIf_Types.h
 *
 *  Created on: 14 maj 2010
 *      Author: Fredrik
 */

#ifndef WDGIF_TYPES_H_
#define WDGIF_TYPES_H_

typedef enum
{
	WDGIF_FAST_MODE,
	WDGIF_OFF_MODE,
	WDGIF_SLOW_MODE,
}WdgIf_ModeType;

typedef void (*Wdg_TriggerLocationPtrType)(void);
typedef Std_ReturnType (*Wdg_SetModeLocationPtrType)(WdgIf_ModeType Mode);

typedef struct
{
	const uint8 Wdg_Index;
	Wdg_TriggerLocationPtrType Wdg_TriggerLocationPtr;
	Wdg_SetModeLocationPtrType Wdg_SetModeLocationPtr;
}Wdg_GeneralType;

#endif /* WDGIF_TYPES_H_ */