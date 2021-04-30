/*
The MIT License

Copyright (c) 2021 MBition GmbH

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/* SPDX-License-Identifier: MIT */

/* roadC example 2 */

/* printf() */
#ifdef __cplusplus
#include <cstdio>
#else
#include <stdio.h>
#endif /* __cplusplus */

#include "roadc.h"

tRoadcByte arr1[4]={2, 3, 3, 4};
tRoadcByte arr1Pad[4]={1, 2, 0, 0};
tRoadcByte arr2[3]={2, 3, 3};
tRoadcByte arr2Pad[3]={0, 255, 0};
tRoadcByte arr3[2]={5, 7};
tRoadcByte arr3Pad[2]={0, 252};
tRoadcByte arr4[5]={1, 2, 3, 4, 5};
tRoadcByte arr4Pad[5]={255, 255, 0, 0, 0};
tRoadcByte arr5[3]={4, 5, 0};
tRoadcByte arr5Pad[3]={0, 0, 255};

int main(int arc, char **argv){
  tRoadcPtr pRoadc;
  tRoadcBytePtr compactedData;
  tRoadcBytePtr compactedDataPaddingByteMask;
  tRoadcUInt32 compactedDataSize;
  tRoadcUInt32 i;

  pRoadc = roadcNew();

  roadcAddElement(pRoadc, arr1, arr1Pad, 4, 1);
  roadcAddElement(pRoadc, arr2, arr2Pad, 3, 1);
  roadcAddElement(pRoadc, arr3, arr3Pad, 2, 1);
  roadcAddElement(pRoadc, arr4, arr4Pad, 5, 1);
  roadcAddElement(pRoadc, arr5, arr5Pad, 3, 1);

  roadcCalculation(pRoadc, 1, 0);

  compactedDataSize = roadcGetCompactedDataSize(pRoadc);
  compactedData = roadcGetCompactedData(pRoadc);
  compactedDataPaddingByteMask = roadcGetCompactedDataPaddingByteMask(pRoadc);


  printf("Compacted data size: %lu\n", compactedDataSize);
  printf("data: ");
  for (i=0; i<compactedDataSize; i++){
    printf("%3u ", compactedData[i]);
  }
  printf("\nmask: ");
  for (i=0; i<compactedDataSize; i++){
    printf("%3u ", compactedDataPaddingByteMask[i]);
  }
  printf("\n");

  printf("arr1 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr1, arr1Pad, 4, 1));
  printf("arr2 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr2, arr2Pad, 3, 1));
  printf("arr3 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr3, arr3Pad, 2, 1));
  printf("arr4 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr4, arr4Pad, 5, 1));
  printf("arr5 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr5, arr5Pad, 3, 1));

  roadcDelete(pRoadc);

  return 0; 
}
