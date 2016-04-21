/**********************************************
* Doug Chamberlain
* February 16, 2016
* CS125
* Homework 5
* char to hex, decimal, and binary
**********************************************/

#include <stdio.h>

int main() 
{
  char userInput;  /* holds the current char evaluated */
  int shiftAmount;  /* amount to shift the given byte */
  int bitCount;  /* increment as bits are set to 1 */
  
  printf("Enter a line of text: ");

  do /* Loop through keyboard buffer until '\n' char is found. */
  {
    scanf("%c", &userInput); /* get next char */
    if(userInput != '\n')  /* attempt to filter non-text input */
    {
      bitCount = 0;
      printf("The ASCII code for '%c' is 0x%x in hex, %d in decimal, and ", userInput, userInput, userInput);
      
      /* Binary */
      for(shiftAmount = 7; shiftAmount >= 0; shiftAmount--)
      {
        printf("%d", (userInput >> shiftAmount) & 1);
        bitCount += (userInput >> shiftAmount) & 1;
      }
      printf(" in binary. %d bits were set.\n", bitCount);
    }
  } while(userInput != '\n');
}
