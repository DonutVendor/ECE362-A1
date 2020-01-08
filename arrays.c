#include "arrays.h"
#include <time.h>

//Creates a list that is randomly populated with 'size' elements
//These random values are set to be between 'min' and 'max'
//Returns a pointer to the array
ptrIntArray createQueue(int size, int min, int max){

  ptrIntArray toReturn = (ptrIntArray)malloc(sizeof(intArray_t));
  if(toReturn == NULL)
    return NULL;
  toReturn->size = size;
  toReturn->values = malloc(size * sizeof(int));
  if(toReturn->values == NULL)
    return NULL;

  srand(time(0));
  for(int i = 0; i < size; i++){
    toReturn->values[i] = getRand(min, max);
  }

  return toReturn;

}

//Returns a random value between min and max
int getRand(int min, int max){
  return (rand() % (max - min)) + min;
}
