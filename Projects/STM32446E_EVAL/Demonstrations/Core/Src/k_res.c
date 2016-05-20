/**
  ******************************************************************************
  * @file    k_res.c
  * @author  MCD Application Team
  * @version V1.2.3
  * @date    29-January-2016
  * @brief   This file contains the Hex dumps of the images available
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include <stdlib.h>

#include "GUI.h"
#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/** @addtogroup CORE
  * @{
  */

/** @defgroup KERNEL_RES
  * @brief Kernel resources 
  * @{
  */


/* External variables --------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/
/* Private defines -----------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

//#pragma location="ExtFlashSection"
static GUI_CONST_STORAGE unsigned long acSTLogo40x20[] = {
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF7141414, 0x937C7872, 0x48AFA28A, 0x35B7A789, 0x34B9A88A, 0x34BAA98A, 0x34BCAA8A, 0x34BCAB8B, 0x34BDAC8D, 0x34BEAC8F, 0x34BEAE90, 
        0x34BFAF91, 0x34C0B092, 0x34C0B194, 0x34C1B194, 0x34C1B195, 0x34C1B194, 0x34C1B193, 0x34C1B192, 0x34C1B092, 0x34C1B091, 0x34C2AF90, 0x34C1AF8F, 0x34C1AF8F, 0x34C0AE8F, 0x34BFAE8F, 0x5EB7AF9F, 0xFF030303, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xEB1D1D1D, 0x32AEA088, 0x009E7A40, 0x00A17936, 0x00A77D38, 0x00AD8239, 0x00B4863A, 0x00BA8A3B, 0x00BD8E41, 0x00BE9248, 0x00C0964F, 0x00C29A55, 
        0x00C49E5C, 0x00C6A262, 0x00C7A669, 0x00C9A86C, 0x00C7A669, 0x00C6A262, 0x00C49E5C, 0x00C29A56, 0x00C09650, 0x00BE9248, 0x00BD8E42, 0x00BA8B3C, 0x00B5863A, 0x00AE8239, 0x00A77E3A, 0x60A59B8A, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF010101, 0x549C9282, 0x00926E36, 0x009B7436, 0x00A17936, 0x00A17935, 0x009D7636, 0x00A07939, 0x00A47C3A, 0x00A67E3E, 0x00A68142, 0x00A88347, 0x00A9864B, 
        0x00AA894F, 0x00AC8C53, 0x00AD8E57, 0x00AE8F59, 0x00AD8F58, 0x00AD8D54, 0x00AC8A51, 0x00AB884D, 0x00AA8649, 0x00A98445, 0x00A88141, 0x00A7803D, 0x00A47D3C, 0x00A07B3C, 0x01A48755, 0xC74E4D4C, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD93C3C3C, 0x039F8357, 0x00957036, 0x009A7336, 0x00A48655, 0x00D7CEBE, 0x00F5F3F0, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 
        0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x00F9F8F6, 0x31DDDCDB, 0xFE060606, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x748F8779, 0x008E6B34, 0x00946F36, 0x00A58754, 0x00F8F6F3, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x987A7A7A, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF71A1A1A, 0x14B9A17A, 0x008C6A35, 0x00946F35, 0x00DED0B9, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x0FFCFCFC, 0xF01B1B1B, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xA3726E68, 0x0098743C, 0x008B6934, 0x00997336, 0x00F7F2EA, 0x00FFFFFF, 0x00FFFFFF, 0x00CEBEA1, 0x00B89B6A, 0x00BB9E6B, 0x00BFA06C, 0x00C2A36D, 0x00C6A66F, 0x00C9A870, 
        0x00CBAA73, 0x00CCAC76, 0x00CDAE78, 0x00CEAF79, 0x00CEB07C, 0x00F2EBDF, 0x00FFFFFF, 0x00FFFFFF, 0x00DCD0BC, 0x00C0A06A, 0x00C3A26A, 0x00C5A46D, 0x00C8A975, 0x68B0ABA2, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF010101, 0x3CB6A488, 0x00856533, 0x00896834, 0x009A753B, 0x00F8F3EC, 0x00FFFFFF, 0x00FFFFFF, 0x00BFAF94, 0x00997235, 0x00A27A37, 0x00A87D38, 0x00AD8139, 0x00B2843A, 0x00B8883A, 
        0x00BB8B3C, 0x00BC8D40, 0x00BD8F44, 0x00BE9147, 0x00B29055, 0x00FCFBF9, 0x00FFFFFF, 0x00FEFDFD, 0x00B0905A, 0x00BB8B3C, 0x00B8893B, 0x00B3853A, 0x01B9985F, 0xCE4B4B4A, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD1434242, 0x01AC9165, 0x00826333, 0x00876633, 0x008F6D37, 0x00E7DBC5, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFEFE, 0x00C2B093, 0x009D7635, 0x00A47B37, 0x00A97E38, 0x00AE8239, 0x00B2853A, 
        0x00B7883A, 0x00BA8A3B, 0x00BB8C3D, 0x00BC8D3F, 0x00C3B092, 0x00FFFFFF, 0x00FFFFFF, 0x00E2D9CB, 0x00B28439, 0x00B7883A, 0x00B3853A, 0x00AE8239, 0x39AE9F84, 0xFE040404, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x6A9C917E, 0x00846435, 0x00806132, 0x00856433, 0x008A6834, 0x00AD8D5A, 0x00F8F3EC, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00D1BE9F, 0x00A27A37, 0x00A47B37, 0x00A97E38, 0x00AD8139, 
        0x00B1843A, 0x00B4863A, 0x00B7883B, 0x00B2853A, 0x00F0EBE3, 0x00FFFFFF, 0x00FFFFFF, 0x00CAAD7D, 0x00B5863A, 0x00B1843A, 0x00AD8139, 0x009C7636, 0xA06B6864, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF11E1E1E, 0x10AE9460, 0x006E501C, 0x00775722, 0x007F5E29, 0x00866530, 0x008C6935, 0x00AE8C56, 0x00F4EFE5, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00DECBAC, 0x00A77F3D, 0x00A47B37, 0x00A87E38, 
        0x00AB8039, 0x00AE8239, 0x00B1833A, 0x00C8A772, 0x00FFFFFF, 0x00FFFFFF, 0x00FAF6F0, 0x00B68B43, 0x00AB7E2E, 0x00A67926, 0x00A0731D, 0x12A88E5B, 0xF4151515, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x9A76726C, 0x0073541F, 0x006B4C1A, 0x00705018, 0x00745415, 0x007A5713, 0x007F5C18, 0x0086621E, 0x009B7A3B, 0x00EBE6DB, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00E0CFB0, 0x00A17935, 0x00A17832, 
        0x00A47932, 0x00A67B31, 0x00AA7F34, 0x00ECDFCA, 0x00FFFFFF, 0x00FFFFFF, 0x00DECBA6, 0x00A27419, 0x009F7219, 0x009C701A, 0x009C7019, 0x6F8C816A, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFE060606, 0x33A19379, 0x0065491D, 0x00684B1C, 0x006C4E19, 0x00715117, 0x00765514, 0x007A5812, 0x007F5B13, 0x00835E15, 0x008A6A2B, 0x00E5DFD5, 0x00FFFFFF, 0x00FFFFFF, 0x00FDFCFB, 0x00AA8334, 0x00936917, 
        0x00966B19, 0x00986D1A, 0x00B08839, 0x00FEFDFC, 0x00FFFFFF, 0x00FEFDFC, 0x00B18A3C, 0x009A6E1B, 0x00986D1A, 0x00966B19, 0x01B49047, 0xD6464646, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xC8454443, 0x0182673A, 0x0065491D, 0x0066491D, 0x006A4C1B, 0x006E4F19, 0x00735216, 0x00775514, 0x007B5813, 0x007F5B13, 0x00835E15, 0x008B6A28, 0x00F2EFE9, 0x00FFFFFF, 0x00FFFFFF, 0x00AE9663, 0x008D6517, 
        0x00906716, 0x00926816, 0x00C6B28A, 0x00FFFFFF, 0x00FFFFFF, 0x00DCD2BD, 0x00956B17, 0x00946A18, 0x00926917, 0x00916817, 0x3FBDAD8A, 0xFF020202, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x61A6A29C, 0x00AB9672, 0x00A99572, 0x00A99572, 0x00AA9571, 0x00AB9671, 0x00AC9770, 0x00AD9870, 0x00AE986F, 0x00AF996F, 0x00B09A6F, 0x00B5A077, 0x00F7F4F0, 0x00FFFFFF, 0x00FFFFFF, 0x00A68D5E, 0x00876116, 
        0x008A6317, 0x0089641C, 0x00EEEBE5, 0x00FFFFFF, 0x00FFFFFF, 0x00A78F60, 0x008E6616, 0x008D6517, 0x008C6417, 0x009B7221, 0xA7706C66, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xEC232323, 0x0CFBFBFB, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00F8F6F2, 0x00896727, 0x00815D14, 
        0x00835E15, 0x00AB9264, 0x00FFFFFF, 0x00FFFFFF, 0x00F1EDE6, 0x0089651E, 0x00886216, 0x00876116, 0x00856016, 0x1DA99367, 0xF7111111, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0x90898989, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFEFE, 0x00B49F7A, 0x00795713, 0x007B5813, 
        0x007E5B15, 0x00DDD3C1, 0x00FFFFFF, 0x00FFFFFF, 0x00C1B08F, 0x00815D15, 0x00815D14, 0x00815C14, 0x07967C48, 0xB8575552, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0x47DCDCDC, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFF, 0x02FFFFFE, 0x02CCBDA3, 0x029A8050, 0x02997F4E, 0x029A804D, 
        0x02AA9367, 0x02FDFDFC, 0x02FFFFFF, 0x02FFFFFF, 0x02B09A71, 0x029D814D, 0x08A38A5B, 0x419F9075, 0xC74C4B49, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xF4191919, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 
        0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xE92A2A2A, 0xF31C1C1C, 0xFF010101, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xEF241C08, 0xBD614816, 0xD4473410, 0xFE080502, 0xB96B5119, 0xFF040402, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xCA1F0A03, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xCC1C0A03, 0xFF020000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xAA86601E, 0xAB75591C, 0xDF41310F, 0x83A27925, 0xC9473511, 0xAB7B5D1C, 0xCF453410, 0xFF000000, 0xFE010000, 0xA62B0E05, 0xA32E0F05, 0xB2230C04, 0xC01F0A04, 0xE60D0402, 0xC1200B04, 0xA22D0F05, 0x87341106, 0xA82B0E04, 
        0xA52D0F05, 0x8F311005, 0x9C2F1005, 0xDA120602, 0xA52D0F05, 0xB0270D04, 0xA6270D04, 0xA52C0F05, 0xC3200A03, 0x703F1407, 0xC51E0A03, 0xA52D0F05, 0xAE280D04, 0xCC160702, 0xA82B0F05, 0x723F1507, 0xFF040000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xAA86601E, 0xB65B4718, 0xF4191206, 0xAD705319, 0x8A906C21, 0xB5674E18, 0xAD7E5F1D, 0xF9130E04, 0xEB0D0602, 0xB7200B03, 0xFC030100, 0xA12A0E05, 0xA7270D05, 0xD9120502, 0x74411607, 0xFA040200, 0xB31D0A03, 0x94341105, 
        0xFF030100, 0xA5230C04, 0xC01C0902, 0x7F3C1406, 0xAC2A0E04, 0x8B3A1406, 0xA22E0F04, 0xFF000000, 0xA72F0E04, 0xA52E0D05, 0x992D0E05, 0xAC2B0F05, 0x893A1406, 0xA0341005, 0xFF000000, 0xA12D0E05, 0xFF040000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xEE211A07, 0x95926D22, 0xA974591C, 0xC5604816, 0x9C87661F, 0xC6513D13, 0xAC775A1C, 0xCC523E12, 0x9188671F, 0xE22F230B, 0xA8290E04, 0xA42D1005, 0xB4220C04, 0xAA2B0E05, 0x96321006, 0xAE2E0F05, 0x9B321106, 0x703C1406, 0xAF2C0E04, 
        0xFF020100, 0xBF1C0A03, 0xD2170802, 0xCB1D0903, 0xA42C0F05, 0xB0280E04, 0xC0200B03, 0xFF000000, 0xC0260B03, 0xBE260B04, 0xE10E0501, 0xA32D0F05, 0xAF270D05, 0xCE190702, 0xA92C0E05, 0x8B381206, 0xFF040000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF3090301, 0xA4260D04, 0xAD250C04, 0xFF010000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 
        0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000, 0xEC000000
};

GUI_CONST_STORAGE GUI_BITMAP bmSTLogo40x20 = {
  40,                              /* XSize */
  20,                              /* YSize */
  160,                             /* BytesPerLine */
  32,                              /* BitsPerPixel */
  (unsigned char *)acSTLogo40x20,  /* Pointer to picture data */
  NULL                             /* Pointer to palette */
 ,GUI_DRAW_BMP8888
};

//#pragma location="ExtFlashSection"
static GUI_CONST_STORAGE unsigned long acusbdisk[] = {
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xEF151515, 0xD8303030, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xE1252525, 0xFE020202, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xF70B0B0B, 0x61A8A8A8, 0x03FEFEFE, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x2BDCDCDC, 0xCE383838, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0x70989898, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x19EBEBEB, 0xC5424242, 0xC83D3D3D, 0xC83D3D3D, 0xC83D3D3D, 0xC83D3D3D, 0xC83D3D3D, 
        0xC83D3D3D, 0xC83D3D3D, 0xC83D3D3D, 0xCA3D3D3D,
  0x12F3F3F3, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x2DD6D6D6, 0x4AB6B6B6, 0x4AB6B6B6, 0x4AB6B6B6, 0x4AB6B6B6, 0x4AB6B6B6, 
        0x4AB6B6B6, 0x4AB6B6B6, 0x03FCFCFC, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x9D6E6E6E, 0xFF000000, 0xFF000000, 0xBE434343, 0xA65B5B5B, 0xA65B5B5B, 
        0xF1121212, 0xFF000000, 0x0CF3F3F3, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x9D6E6E6E, 0xFF000000, 0xFF000000, 0x45BCBCBC, 0x00FFFFFF, 0x00FFFFFF, 
        0xD8313131, 0xFF000000, 0x0CF3F3F3, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x9D6E6E6E, 0xFF000000, 0xFF000000, 0x45BCBCBC, 0x00FFFFFF, 0x00FFFFFF, 
        0xD8313131, 0xFF000000, 0x0CFEFEFE, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x9D6E6E6E, 0xFF000000, 0xFF000000, 0x9B6C6C6C, 0x76929292, 0x76929292, 
        0xEA1C1C1C, 0xFF000000, 0x0CFFFFFF, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x9D6E6E6E, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0x0CFFFFFF, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x9D6E6E6E, 0xFF000000, 0xFF000000, 0x9B6C6C6C, 0x76929292, 0x76929292, 
        0xEA1C1C1C, 0xFF000000, 0x0CFFFFFF, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x9D6E6E6E, 0xFF000000, 0xFF000000, 0x45BCBCBC, 0x00FFFFFF, 0x00FFFFFF, 
        0xD8313131, 0xFF000000, 0x0CFFFFFF, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x9D6E6E6E, 0xFF000000, 0xFF000000, 0x45BCBCBC, 0x00FFFFFF, 0x00FFFFFF, 
        0xD8313131, 0xFF000000, 0x0CFFFFFF, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x9D6E6E6E, 0xFF000000, 0xFF000000, 0xBE434343, 0xA65B5B5B, 0xA65B5B5B, 
        0xF1121212, 0xFF000000, 0x0CFFFFFF, 0x08FFFFFF,
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x2DD6D6D6, 0x49B6B6B6, 0x49B6B6B6, 0x49B6B6B6, 0x49B6B6B6, 0x49B6B6B6, 
        0x49B6B6B6, 0x49B6B6B6, 0x03FFFFFF, 0x08FFFFFF,
  0x12F3F3F3, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x08FFFFFF,
  0x70989898, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x19EBEBEB, 0xC6424242, 0xC93D3D3D, 0xC93D3D3D, 0xC93D3D3D, 0xC93D3D3D, 0xC93D3D3D, 
        0xC93D3D3D, 0xC93D3D3D, 0xC93D3D3D, 0xCB3D3D3D,
  0xF70B0B0B, 0x61A8A8A8, 0x03FEFEFE, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x2BDCDCDC, 0xCE383838, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xEF151515, 0xD8303030, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xE1252525, 0xFE020202, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000
};

GUI_CONST_STORAGE GUI_BITMAP bmusbdisk = {
  25,                               /* XSize */
  23,                               /* YSize */
  100,                              /* BytesPerLine */
  32,                               /* BitsPerPixel */
  (unsigned char *)acusbdisk,       /* Pointer to picture data */
  NULL                              /* Pointer to palette */
 ,GUI_DRAW_BMP8888
};

//#pragma location="ExtFlashSection"
static GUI_CONST_STORAGE unsigned long _acmicrosd[] = {
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFC040404, 0xDC2B2B2B, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xD8313131, 0xDF2A2A2A, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xCD393939, 0x21E4E4E4, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x75959595, 0xFE020202, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFE030303, 0x25E0E0E0, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x67A0A0A0, 0xC43D3D3D, 0xC43D3D3D, 0xC43D3D3D, 0xC43D3D3D, 0xC43D3D3D, 0xC93B3B3B, 0xF50D0D0D, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE51D1D1D, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x15F0F0F0, 
        0xC0484848, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x33D0D0D0, 0x4EB6B6B6, 0x4EB6B6B6, 0x4EB6B6B6, 0x0FF3F3F3, 
        0x1EE8E8E8, 0xFD040404, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xA65B5B5B, 0xFF000000, 0xFF000000, 0xFF000000, 0x31D5D5D5, 
        0x00FFFFFF, 0xE41D1D1D, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x66A1A1A1, 0x9D6E6E6E, 0x9D6E6E6E, 0x9D6E6E6E, 0x1EE7E7E7, 
        0x00FFFFFF, 0xE11E1E1E, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x46BDBDBD, 0x6C989898, 0x6C989898, 0x6C989898, 0x15EEEEEE, 
        0x00FFFFFF, 0xE11E1E1E, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xA65B5B5B, 0xFF000000, 0xFF000000, 0xFF000000, 0x31D5D5D5, 
        0x00FFFFFF, 0xE11E1E1E, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x53ADADAD, 0x80808080, 0x80808080, 0x80808080, 0x19EAEAEA, 
        0x00FFFFFF, 0xE11E1E1E, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x59A9A9A9, 0x897A7A7A, 0x897A7A7A, 0x897A7A7A, 0x1AE9E9E9, 
        0x00FFFFFF, 0xE11E1E1E, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xA65B5B5B, 0xFF000000, 0xFF000000, 0xFF000000, 0x31D5D5D5, 
        0x00FFFFFF, 0xE11E1E1E, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x40C1C1C1, 0x629E9E9E, 0x629E9E9E, 0x629E9E9E, 0x13EFEFEF, 
        0x00FFFFFF, 0xE11E1E1E, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE11E1E1E, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x6C969696, 0xA65B5B5B, 0xA65B5B5B, 0xA65B5B5B, 0x20E4E4E4, 
        0x00FFFFFF, 0xE11E1E1E, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xE41D1D1D, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xA65B5B5B, 0xFF000000, 0xFF000000, 0xFF000000, 0x31D5D5D5, 
        0x00FFFFFF, 0xE41D1D1D, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFD040404, 0x21E4E4E4, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x2DD4D4D4, 0x45BCBCBC, 0x45BCBCBC, 0x45BCBCBC, 0x0DF4F4F4, 
        0x21E4E4E4, 0xFD040404, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xC73F3F3F, 0x1AEAEAEA, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x1AEAEAEA, 
        0xC73F3F3F, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF9080808, 0xD3333333, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xCE373737, 0xD3333333, 0xF9080808, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000
};

GUI_CONST_STORAGE GUI_BITMAP bmmicrosd = {
  25,                           /* XSize */
  23,                           /* YSize */
  100,                          /* BytesPerLine */
  32,                           /* BitsPerPixel */
  (unsigned char *)_acmicrosd,  /* Pointer to picture data */
  NULL,                         /* Pointer to palette */
  GUI_DRAW_BMP8888
};

/**
  * @}
  */

/**
  * @}
  */
  
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
