/**********************************************
* Doug Chamberlain
* February 10, 2016
* CS125
* Homework 4
* Prime Number Generator from input range
**********************************************/

#include <stdio.h>

int main()
{
  int lowerBound;
  int upperBound;
  int isPrime; /* Functions as a boolean */
  int prCount = 0; /* primeCount variable */
  int pPrime; /* possiblePrime variable */
  int pFactor; /* posibleFactor variable */
  float prDensity = 0; /* primeDensity variable */

  printf("Please enter your inclusive lower bound: ");
  scanf("%d", &lowerBound);
  
  /* Filters out numbers less than 2 from input. */
  if(lowerBound < 2)
  {
    lowerBound = 2;
    printf("\n   Your lower bound was less than 2.  No prime numbers exist below 2. \n");
    printf("   The lower bound has been set to 2 to ensure accurate results. \n\n");
  }
  
  printf("Please enter your inclusive upper bound: ");
  scanf("%d", &upperBound);

  /* Increment through the range given by user input */
  for (pPrime = lowerBound; pPrime <= upperBound; pPrime++)
  {
    isPrime = 1; /* every pPrime is assumed to be prime. */
    
    for (pFactor = 2; pFactor <= (pPrime / 2); pFactor++)
    {
      if (pPrime % pFactor == 0)
	    isPrime = 0; /* isPrime = 0 ONLY if a Factor is found */
    }

    if(isPrime == 0)
      printf("%d is not prime. \n", pPrime);
    else if (isPrime == 1)
    {
      printf("%d is prime. \n", pPrime);
      prCount++;
    }
  }
  
  /* Subtract 1 from lowerbound to account for the fact that the range is inclusive */
  prDensity = ((float)prCount) / (upperBound - (lowerBound - 1));

  printf("Over the interval from %d to %d, inclusive, the prime density was %f \n", lowerBound, upperBound, prDensity);
  return 0;
}
