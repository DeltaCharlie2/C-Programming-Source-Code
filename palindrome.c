/**********************************************
* Doug Chamberlain
* March 17, 2016
* CS125
* Homework 7
* Palindromes!
**********************************************/

#include <stdio.h>

int main() 
{
  char userInput[21];
  char tempHolder;
  int inputLength = 0;
  int counter;
  int charCount = 0;
  int isPalindrome = 1; /* used as boolean */
  
  printf("Enter a string: ");
  do /* Loop through keyboard buffer until '\n' char is found. */
  {
    scanf("%c", &userInput[inputLength]); /* get next char */
    if(userInput[inputLength] != '\n')  /* attempt to filter non-text input */
    {
      inputLength++;
    }
  } while(userInput[inputLength] != '\n' && inputLength < 20);
  
  for(counter = 0; counter <= (inputLength / 2) - 1; counter++)
  {
    if(userInput[counter] != userInput[inputLength - counter - 1])
    {
      isPalindrome = 0;
      tempHolder = userInput[counter];
      userInput[counter] = userInput[inputLength - counter - 1];
      userInput[inputLength - counter - 1] = tempHolder;
    }
  }
  
  userInput[inputLength] = '\0';
  
  if(isPalindrome)
  {
    printf("The reverse string is %s, so we do have a palindrome.\n", userInput);
  }
  else
  {
    printf("The reverse string is %s, so we don't have a palindrome.\n", userInput);
  }
}
