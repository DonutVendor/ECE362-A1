/*
Names: Hannah Mortimer
	Devon Mickels
Date: January 08 2020
Professor: Schubert
Class: ECE 362
Assignment: 1 - Arguments/MQG
*/

// TO DO:
//	We need to do a check for arguments entered more than once
//	Switch case or if elif statement for the arguments
//	NOT ALL IN MAIN

#include <stdio.h>
#include <string.h>
#include "arrays.h"

#define REQUEST_STEP 2 //Value to divide the remaining requests by
#define INFINITY 999999999

// Default values
int numOfQueues = 1;
int numOfRequests = 5;
int minInt = 0;
int maxInt = 20;

void printQueue(ptrIntArray queue);
ptrIntArray* createQueues(int numOfQueues, int numRequests, int minInt, int maxInt);

int main(int argc, char const *argv[]) {

    //Use the in line cmd prompts

    //We want to start looping through all of the arguments, scanning for '-''s
    //From there, we want to check if the value after the - is a q, r, min or max
    //If we find one of these values, the numeric value in the next argument goes with it

    //numOfRequests needs to be randomly divided among all the numOfQueues
    ptrIntArray* arrays = createQueues(numOfQueues, numOfRequests, minInt, maxInt); //Holds a list of the arrays

    int lowestSum = INFINITY;
    int indexOfLowestSum = -1;
    for(int y = 0; y < numOfQueues; y++){
      printf("Queue #%d sum: %d\n", y + 1, arrays[y]->sum);
      if(arrays[y]->sum < lowestSum){
        lowestSum = arrays[y]->sum;
        indexOfLowestSum = y;
      }
    }
    printf("\nValues in the lowest-sum queue:\n");
    printQueue(arrays[indexOfLowestSum]);
}

ptrIntArray* createQueues(int numOfQueues, int numRequests, int minInt, int maxInt){
  ptrIntArray* arrays = (ptrIntArray*)malloc(numOfQueues * sizeof(intArray_t));
  int remainingRequests = numRequests;
  for(int x = 0; x < numOfQueues; x++){
    if(x != numOfQueues - 1){
      int temp = getRand(0, (remainingRequests / REQUEST_STEP));
      remainingRequests -= temp;
      arrays[x] = createQueue(temp, minInt, maxInt);
    }else{
      arrays[x] = createQueue(remainingRequests, minInt, maxInt);
    }
  }
  return arrays;
}

void printQueue(ptrIntArray queue){
  for(int y = 0; y < queue->size; y++){
    if(y != queue->size - 1){
      printf("%d, ", queue->values[y]);
    }else{
      printf("%d", queue->values[y]);
    }
  }
}

int checkArguments(char *arg) {

  if(strcmp(arg,"-q") == 1) {

  }
  else if(strcmp(arg,"-r") == 1) {
  }
  else if(strcmp(arg,"-max") == 1) {
  }
  else if(strcmp(arg,"-min") == 1) {
  }
  else{
  }

  return 0;
}
