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

// Default values
int numOfQueues = 1;
int numOfRequests = 5;
int minInt = 0;
int maxInt = 20;

// Main method that will run and do shit
int main(int argc, char const *argv[]) {

  if(argc > 1){
    //Use the in line cmd prompts

    //We want to start looping through all of the arguments, scanning for '-''s
    //From there, we want to check if the value after the - is a q, r, min or max
    //If we find one of these values, the numeric value in the next argument goes with it

    for(int i = 0; i < argc; i++){
      if(strcmp(argv[i], "-q") == 0){
        printf("-q @ pos %d\n", i);
      }
    }

  }else{
    //Prompt the user for additional input
<<<<<<< HEAD
=======
    printf("Please enter your arguments: \n");
    //char userInput = scanf("%s");
    //printf("your arguments %s", userInput);
  }
>>>>>>> 58f0f4d1ddbb4ccd0c8f7bf67aa1d78cb35d95e6

    ptrIntArray test = createQueue(5, 0, 20);
    for(int i = 0; i < 5; i++){
      printf("%d-", test->values[i]);
    }

  }

  return 0;
}
