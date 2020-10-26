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

// -----------------------------------------------------------------------------------------------------
// SM4 test vector from document 1522788048733065051.pdf
// -----------------------------------------------------------------------------------------------------
char *TestVector_SM4_PlainText[]  = {"0123456789ABCDEFFEDCBA9876543210", 
									 "0123456789ABCDEFFEDCBA9876543210"
};
char *TestVector_SM4_CipherText[] = {"681EDF34D206965E86B3E94F536E4246",
									 "681EDF34D206965E86B3E94F536E4246"
};
char *TestVector_SM4_TestKey[]  = { "0123456789ABCDEFFEDCBA9876543210", 
									"0123456789ABCDEFFEDCBA9876543210"
};
