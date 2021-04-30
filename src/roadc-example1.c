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

/* roadC example 1 */

/* printf() */
#ifdef __cplusplus
#include <cstdio>
#else
#include <stdio.h>
#endif /* __cplusplus */

#include "roadc.h"

tRoadcByte arr1[4]={2, 3, 3, 4};
tRoadcByte arr2[3]={2, 3, 3};
tRoadcByte arr3[2]={5, 7};
tRoadcByte arr4[5]={1, 2, 3, 4, 5};
tRoadcByte arr5[3]={4, 5, 0};

int main(int arc, char **argv){
  tRoadcPtr pRoadc;
  tRoadcBytePtr compactedData;
  tRoadcUInt32 compactedDataSize;
  tRoadcUInt32 i;

  pRoadc = roadcNew();

  roadcAddElement(pRoadc, arr1, NULL, 4, 1);
  roadcAddElement(pRoadc, arr2, NULL, 3, 1);
  roadcAddElement(pRoadc, arr3, NULL, 2, 1);
  roadcAddElement(pRoadc, arr4, NULL, 5, 1);
  roadcAddElement(pRoadc, arr5, NULL, 3, 1);

  roadcCalculation(pRoadc, 1, 0);

  compactedDataSize = roadcGetCompactedDataSize(pRoadc);
  compactedData = roadcGetCompactedData(pRoadc);

  printf("Compacted data size: %lu\n", compactedDataSize);
  printf("data: ");
  for (i=0; i<compactedDataSize; i++){
    printf("%3u ", compactedData[i]);
  }
  printf("\n");

  printf("arr1 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr1, NULL, 4, 1));
  printf("arr2 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr2, NULL, 3, 1));
  printf("arr3 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr3, NULL, 2, 1));
  printf("arr4 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr4, NULL, 5, 1));
  printf("arr5 position in compacted data: %lu \n", roadcGetPositionInCompactedData(pRoadc, arr5, NULL, 3, 1));

  roadcDelete(pRoadc);

  return 0; 
}
