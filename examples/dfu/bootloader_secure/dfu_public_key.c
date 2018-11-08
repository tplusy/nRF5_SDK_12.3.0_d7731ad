
/* This file was automatically generated by nrfutil on 2017-05-05 (YY-MM-DD) at 13:26:49 */

#include "stdint.h"
#include "compiler_abstraction.h"

/* This file was generated with a throwaway private key, that is only inteded for a debug version of the DFU project.
  Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate a valid public key. */

#ifdef NRF_DFU_DEBUG_VERSION 

/** @brief Public key used to verify DFU images */
__ALIGN(4) const uint8_t pk[64] =
{
    0x19, 0xf5, 0x25, 0x60, 0x18, 0xc5, 0x3a, 0x48, 0x0d, 0x60, 0xa0, 0xe6, 0xdf, 0xf3, 0x2c, 0x16, 0x71, 0xcc, 0xf6, 0x69, 0x13, 0x2a, 0x63, 0x16, 0x55, 0x4d, 0x67, 0x7d, 0xc6, 0x1d, 0xc9, 0x27, 
    0xeb, 0xf9, 0xd3, 0xec, 0x54, 0x08, 0x08, 0xf8, 0x58, 0x62, 0xd0, 0xc6, 0x77, 0x68, 0x74, 0x64, 0x0a, 0xee, 0x28, 0xf6, 0x59, 0x12, 0xb6, 0xbd, 0x97, 0x5d, 0x64, 0x18, 0x62, 0x99, 0x9c, 0x87
};

#else
/** @brief Public key used to verify DFU images */
__ALIGN(4) _PK_CONST uint8_t pk[64] =
{
    0x18, 0x0f, 0x7d, 0x1d, 0x9c, 0xc2, 0x4f, 0xf0, 0x15, 0xea, 0xb8, 0x6f, 0x3c, 0xda, 0xf5, 0xa5, 0x1f, 0x76, 0x7b, 0xe2, 0x3b, 0x45, 0x1f, 0xed, 0x3d, 0xe9, 0xf2, 0x80, 0xe7, 0xb0, 0xfe, 0x8b, 
    0xc2, 0x56, 0x3b, 0xae, 0x1a, 0x60, 0x53, 0x12, 0x25, 0xf8, 0xe9, 0xa3, 0xdf, 0x41, 0xf1, 0x0a, 0xb9, 0x62, 0x7e, 0x82, 0x2c, 0xf8, 0x7d, 0x23, 0x01, 0x49, 0x24, 0x95, 0x98, 0x3b, 0x25, 0x25
};
#endif
