#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main() {

  float inputCount = 0.0;
  float inputValue = 0.0;

  float biggestInput = 0.0;
  float smallestInput = HUGE_VAL;

  float sum = 0.0;
  float mean = 0.0;
  float extremesMean = 0;

  bool finished = false;

  while (finished == false) {

    system("clear");

    // Debugger
    // printf("sum: %.1f, inputValue: %.1f, inputCount: %.1f, mean: %.2f, biggestInput: %.1f, smallestInput: %.1f\n", sum, inputValue, inputCount, mean, biggestInput, smallestInput);

    printf("Input value or input 0 to finish\n");

    scanf("%f", &inputValue);

    if(inputValue == 0) {

      finished = true;

    } else {

    if (inputValue > biggestInput) {
      biggestInput = inputValue;
    };

    if (inputValue < smallestInput) {
      smallestInput = inputValue;
    };
      
    inputCount++;

    sum = sum + inputValue;

    }
  }

  system("clear");


  if (inputCount > 0) {
    mean = sum / inputCount;

    extremesMean = (biggestInput + smallestInput) / 2;

    if (mean > extremesMean) {

      printf("The overall mean between the numbers entered is greater than the biggest and smallest inputs mean");

    } else if ( mean < extremesMean) {

      printf("The overall mean between the numbers entered is less than the biggest and smallest inputs mean");

    } else {

      printf("The overall mean between the numbers entered is equal the biggest and smallest inputs mean");

    }
  } else {

    
    printf("No values was inserted!");
  
  };

  return 0;
}