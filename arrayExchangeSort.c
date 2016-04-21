/**********************************************
* Doug Chamberlain
* April 7, 2016
* CS125
* Homework 10
* Generates a random array and performs an
* exchange sort on that array.
**********************************************/

#include <stdio.h>
#include <stdlib.h>

void printArray(int, int arrayToPrint[]);
void swap(int *, int *);
void fillArray(int, int arrayToFill[]);
void sortArray(int, int someArray[]);

int main()
{
  int arrayToBeSorted[20];
  
  fillArray(20, arrayToBeSorted);
  
  printf("\nBefore the sort, here's the array of random values:\n");
  
  printArray(20, arrayToBeSorted);
  sortArray(20, arrayToBeSorted);
  
  printf("\nAfter the sort, here's the array, nicely sorted into ascending order:\n");
  
  printArray(20, arrayToBeSorted);
}

void printArray(int arrSize, int arrayToPrint[])
{
  int aCount;
  
  for(aCount = 0; aCount < arrSize; aCount++)
  {
    printf("Array[%d] is %d\n", aCount, arrayToPrint[aCount]);
  }
}

void swap(int *valueToSwap1, int *valueToSwap2)
{
  int temp;
  
  temp = *valueToSwap1;
  *valueToSwap1 = *valueToSwap2;
  *valueToSwap2 = temp;
}

void fillArray(int arrSize, int arrayToFill[])
{
  int aCount;
  
  for(aCount = 0; aCount < arrSize; aCount++)
  {
    arrayToFill[aCount]= rand();
  }
}

void sortArray(int arrSize, int someArray[])
{
  /* A swap sort compares each element in an array to every 
     other element and swaps any two that are out of order */
    
  int outerLoopIndex;
  int innerLoopIndex;
    
  for (outerLoopIndex = 0; outerLoopIndex < arrSize ; outerLoopIndex++)
    for (innerLoopIndex = 0; innerLoopIndex < arrSize; innerLoopIndex++)
      if (someArray[outerLoopIndex] < someArray[innerLoopIndex])
        swap(&someArray[outerLoopIndex], &someArray[innerLoopIndex]);
}
