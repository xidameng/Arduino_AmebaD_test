/****************************************************************************** 
* 
* Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved. 
* 
* This program is free software; you can redistribute it and/or modify it 
* under the terms of version 2 of the GNU General Public License as 
* published by the Free Software Foundation. 
* 
* This program is distributed in the hope that it will be useful, but WITHOUT 
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for 
* more details. 
* 
* You should have received a copy of the GNU General Public License along with 
* this program; if not, write to the Free Software Foundation, Inc., 
* 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA 
* 
* 
******************************************************************************/

#if (RTL8723B_SUPPORT==1)
#ifndef __INC_FW_HW_IMG_8723B_H
#define __INC_FW_HW_IMG_8723B_H


/******************************************************************************
*                           FW_AP.TXT
******************************************************************************/

void
ODM_ReadFirmware_MP_8723B_FW_AP(
     IN   PDM_ODM_T    pDM_Odm,
     OUT  u1Byte       *pFirmware,
     OUT  u4Byte       *pFirmwareSize
);

/******************************************************************************
*                           FW_NIC.TXT
******************************************************************************/

void
ODM_ReadFirmware_MP_8723B_FW_NIC(
     IN   PDM_ODM_T    pDM_Odm,
     OUT  u1Byte       *pFirmware,
     OUT  u4Byte       *pFirmwareSize
);

/******************************************************************************
*                           FW_NIC_WOWLAN.TXT
******************************************************************************/

void
ODM_ReadFirmware_MP_8723B_FW_NIC_WOWLAN(
     IN   PDM_ODM_T    pDM_Odm,
     OUT  u1Byte       *pFirmware,
     OUT  u4Byte       *pFirmwareSize
);

/******************************************************************************
*                           FW_WoWLAN.TXT
******************************************************************************/
#ifdef CONFIG_WOWLAN
void
ODM_ReadFirmware_MP_8723B_FW_WOWLAN(
     IN   PDM_ODM_T    pDM_Odm,
     OUT  u1Byte       *pFirmware,
     OUT  u4Byte       *pFirmwareSize
);
#endif //CONFIG_WOWLAN
#endif
#endif // end of HWIMG_SUPPORT

