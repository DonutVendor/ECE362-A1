#ifndef _ARRAYS_H_
#define _ARRAYS_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct intArray{
  int size;
  int* values;
}intArray_t, *ptrIntArray;

ptrIntArray createQueue(int size, int min, int max);

int getRand(int min, int max);

#endif
