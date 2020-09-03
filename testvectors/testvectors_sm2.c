/*
* MIT License
*
* Copyright (c) 2019 Infineon Technologies AG
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

// SM2 test vectors    -   SM2 P256
//-------------------------------------------------------------------------

// -----------------------------------------------------------------------------------------------------
// SM2 Encryption test vector
// -----------------------------------------------------------------------------------------------------

// 04 d5548c7825cbb56150a3506cd57464af8a1ae0519dfaf3c58221dc810caf28dd 921073768fe3d59ce54e79a49445cf73fed23086537027264d168946d479533e
BYTE BYTE_TestVectorPubKeySM2256_Chip[] = {
    0x04,
    0xd5, 0x54, 0x8c, 0x78, 0x25, 0xcb, 0xb5, 0x61, 0x50, 0xa3, 0x50, 0x6c, 0xd5, 0x74, 0x64, 0xaf, 0x8a, 0x1a, 0xe0, 0x51, 0x9d, 0xfa, 0xf3, 0xc5, 0x82, 0x21, 0xdc, 0x81, 0x0c, 0xaf, 0x28, 0xdd, 
    0x92, 0x10, 0x73, 0x76, 0x8f, 0xe3, 0xd5, 0x9c, 0xe5, 0x4e, 0x79, 0xa4, 0x94, 0x45, 0xcf, 0x73, 0xfe, 0xd2, 0x30, 0x86, 0x53, 0x70, 0x27, 0x26, 0x4d, 0x16, 0x89, 0x46, 0xd4, 0x79, 0x53, 0x3e
};
ECPublicKey ECPubK_TestVectorSM2256_Chip = { 0x41, BYTE_TestVectorPubKeySM2256_Chip };

BYTE BYTE_TestVectorPrivKeySM2256_Chip[] = {
    0x12, 0x8B, 0x2F, 0xA8, 0xBD, 0x43, 0x3C, 0x6C, 0x06, 0x8C, 0x8D, 0x80, 0x3D, 0xFF, 0x79, 0x79, 0x2A, 0x51, 0x9A, 0x55, 0x17, 0x1B, 0x1B, 0x65, 0x0C, 0x23, 0x66, 0x1D, 0x15, 0x89, 0x72, 0x63
};
ECPrivateKey ECPrvK_TestVectorSM2256_Chip= { 0x20, BYTE_TestVectorPrivKeySM2256_Chip };

char *TestVector_Message[]= {"d3", // 1 byte
                             "5738c929c4f4ccb6", // 8 bytes
                             "0a27847cdc98bd6f62220b046edd762b", // 16 bytes
                             "09fc1accc230a205e4a208e64a8f204291f581a12756392da4b8c0cf5ef02b95",   // 32 bytes
};

BYTE ucSM2_Msg [16] = {0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f};

// -----------------------------------------------------------------------------------------------------
// SM2 Decryption test vector
// -----------------------------------------------------------------------------------------------------

BYTE BYTE_TestVectorPubKeySM2256_Recipient[] = {
    0x04,

    0X09,0XF9,0XDF,0X31,0X1E,0X54,0X21,0XA1,0X50,0XDD,0X7D,0X16,0X1E,0X4B,0XC5,0XC6,
    0X72,0X17,0X9F,0XAD,0X18,0X33,0XFC,0X07,0X6B,0XB0,0X8F,0XF3,0X56,0XF3,0X50,0X20,
    0XCC,0XEA,0X49,0X0C,0XE2,0X67,0X75,0XA5,0X2D,0XC6,0XEA,0X71,0X8C,0XC1,0XAA,0X60,
    0X0A,0XED,0X05,0XFB,0XF3,0X5E,0X08,0X4A,0X66,0X32,0XF6,0X07,0X2D,0XA9,0XAD,0X13
};
ECPublicKey ECPubK_TestVectorSM2256_Recipient = { 0x41, BYTE_TestVectorPubKeySM2256_Recipient };

BYTE BYTE_TestVectorPrivKeySM2256_Recipient[] = { 
	0X39,0X45,0X20,0X8F,0X7B,0X21,0X44,0XB1,0X3F,0X36,0XE3,0X8A,0XC6,0XD3,0X9F,0X95, 
	0X88,0X93,0X93,0X69,0X28,0X60,0XB5,0X1A,0X42,0XFB,0X81,0XEF,0X4D,0XF7,0XC5,0XB8
};

