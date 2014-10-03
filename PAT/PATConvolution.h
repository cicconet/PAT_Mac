//
//  PATConvolution.h
//  PAT
//
//  This code is distributed under the MIT Licence.
//  See notice at the end of this file.
//

#ifndef __PAT__PATConvolution__
#define __PAT__PATConvolution__

#include <iostream>
#include <Accelerate/Accelerate.h>
#include "PATImage.h"
#include "PATWavelet.h"

class PATConvolution {
    int width;
    int height;
    PATImage bufferR;
    PATImage bufferI;
    vImage_Buffer vImageBufferR;
    vImage_Buffer vImageBufferI;
public:
    void set_up(int imageWidth, int imageHeight);
    void convolve(PATImage input, PATWavelet wavelet, PATImage output, bool ignoreDirection);
    void clean_up(void);
};

#endif /* defined(__PAT__PATConvolution__) */

//
// Copyright (c) 2014 Marcelo Cicconet
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//