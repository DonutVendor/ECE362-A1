/*
// Names: Hannah Mortimer & Devon Mickels
// Date: January 10 2020
// Assignment: 1 - MQG
*/
#ifndef _ARRAYS_H_
#define _ARRAYS_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct intArray{
  int size;
  int sum;
  int* values;
}intArray_t, *ptrIntArray;

ptrIntArray createQueue(int size, int min, int max);

int getRand(int min, int max);

#endif
