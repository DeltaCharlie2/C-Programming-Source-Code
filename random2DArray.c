/**********************************************
 * Doug Chamberlain
 * March 25, 2016
 * CS125
 * Homework 8
 * Output an array of random numbers with user-
 * supplied dimensions.
 **********************************************/

#include <stdio.h>
#include <stdlib.h>

void fillArray(int numRows, int numCols, float array[numRows][numCols]);
void printArray(int numRows, int numCols, float array[numRows][numCols]);
void identifySmallestElement(int numRows, int numCols, float array[numRows][numCols]);

int main()
{
  int numRows, numCols;
  
  printf("Enter the size of the array as n x m: ");
  scanf("%d x %d", &numRows, &numCols);
  
  float randArray[numRows][numCols];
  
  fillArray(numRows, numCols, randArray); 
  printArray(numRows, numCols, randArray);
  identifySmallestElement(numRows, numCols, randArray);
}

void fillArray(int numRows, int numCols, float array[numRows][numCols])
{
  int row, col;
  
  for(row = 0; row < numRows; row++)
  {
    for(col = 0; col < numCols; col++)
    {
      array[row][col] = ((float)rand()) / RAND_MAX;
    }
  }
}

void printArray(int numRows, int numCols, float array[numRows][numCols])
{
  int row, col;
  
  for(row = 0; row < numRows; row++)
  {
    for(col = 0; col < numCols; col++)
    {
      printf("%4.2f  ", array[row][col]);
    }
    printf("\n");    
  }
}

void identifySmallestElement(int numRows, int numCols, float array[numRows][numCols])
{
  
  int row, col;
  int minRow, minCol;
  float minValue = 1.0;
  
  for(row = 0; row < numRows; row++)
  {
    for(col = 0; col < numCols; col++)
    {
      if(array[row][col] < minValue)
      {
        minValue = array[row][col];
        minRow = row;
        minCol = col;
      }
    }
  }
  printf("The smallest value was %4.2f in row %d, column %d.\n", minValue, minRow, minCol);
}




