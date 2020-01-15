/*
// Name: Hannah Mortimer & Devon Mickels
// Date: January 10 2020
// Prof: Dr Schubert
// Class: ECE 362 
// Assignment: 1 - MQG
*/
#include "arrays.h"
#include <time.h>

//Creates a list that is randomly populated with 'size' elements
//These random values are set to be between 'min' and 'max'
//Returns a pointer to the structure
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

  toReturn->sum = sumQueue(toReturn);

  return toReturn;

}

//Takes a Queue as an input, and sums the values stored in the array
//Returns the summed value
int sumQueue(ptrIntArray queue){
  int toReturn = 0;
  for (int i = 0; i < queue->size; i++) {
    toReturn += queue->values[i];
  }
  return toReturn;
}

//Returns a random value between min and max
int getRand(int min, int max){
  return (rand() % (max - min)) + min;
}
