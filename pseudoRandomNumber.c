/**********************************************
* Doug Chamberlain
* February 16, 2016
* CS125
* Homework 6
* Output a pseudo-random float between 2 given 
* limits.
**********************************************/

#include <stdio.h>
#include <stdlib.h>

float randomBetween(float upper, float lower)
{
  return lower + ((((float)rand()) / RAND_MAX) * (upper - lower));
}

int main()
{
  int numValues;
  int count;
  float upperLimit;
  float lowerLimit;
  
  printf("Enter lower and upper limits separated by a comma: ");
  scanf("%g, %g", &lowerLimit, &upperLimit);
  printf("How many random values would you like to generate? ");
  scanf("%d", &numValues);
  for(count = 0; count < numValues; count++)
  {
    printf("Your random number is %f\n", randomBetween(upperLimit, lowerLimit));
  }
}
