/*
    MIT License

    Copyright (c) 2018, Alexey Dynda

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#include "game_basic.h"


uint8_t gameField[24*14] =
{
   5,0,0,0,0,3,3,0,0,0,0,5,5,0,0,0,0,3,3,0,0,0,0,5,
   5,0,2,0,0,4,0,2,1,1,2,0,0,0,0,0,4,0,0,2,1,1,2,5,
   5,0,2,0,0,1,0,2,0,0,1,1,5,2,0,0,1,1,0,2,0,0,1,1,
   5,0,2,1,0,0,0,2,0,4,0,0,0,2,0,0,0,0,0,2,0,4,0,5,
   5,1,2,1,1,1,1,1,1,1,1,1,5,1,5,2,1,1,1,1,1,1,1,1,
   5,0,2,0,0,0,0,0,4,0,0,0,0,0,5,2,0,0,0,0,4,0,0,5,
   1,1,1,1,1,1,1,2,1,1,1,1,1,2,0,2,1,1,1,1,1,1,1,1,
   5,0,0,0,0,3,3,2,0,0,0,5,5,1,1,1,0,3,3,0,0,0,0,5,
   5,0,2,0,4,0,0,2,1,1,2,0,0,0,0,0,4,0,0,2,1,1,2,5,
   5,0,2,0,1,1,0,2,0,0,1,1,5,2,0,0,1,1,0,2,0,0,1,1,
   5,0,2,0,0,0,0,2,0,4,0,0,0,2,0,0,0,0,0,2,0,4,0,5,
   5,1,2,1,1,1,1,1,1,1,1,1,5,1,2,1,1,1,1,1,1,1,1,1,
   5,0,2,0,0,0,0,0,4,0,0,5,5,0,2,0,0,0,0,0,4,0,0,5,
   1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
};

GraphicsDisplay display(3,{-1, 4, 5, 0,-1,-1}); // 3 reset, 5 ces, 5 dc
GraphicsEngine engine(display);
