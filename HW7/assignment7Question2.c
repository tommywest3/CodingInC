//Thomas West 03/19/2021

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//function prototype
char* caseSwap(char* pStr);

int main(void) {
  //create string array
  char strptr[] = {"hello"};
  //dynamically allocate memory
  char* strPtr = malloc(1000 * sizeof(char));
  //call function in main
  caseSwap(strptr);
  //print value after switching cases
  printf("%s\n", strptr);

}

//define function
char* caseSwap(char* pStr) {
  //initialize variables
  int i;
  char str = *pStr;
  int length = strlen(pStr);
  
  for(i=0; i<length; i++) {
     str = pStr[i];
     //subtract 32 for lowercase ASCII values 
     if (str >= 'a' && str <= 'z') {
	str = str - 32;
     }
     //add 32 for uppercase ASCII calues
     else if (str >= 'A' && str <= 'Z') {
        str = str + 32;
     }
     pStr[i] = str;
  }
  //return pointer to string
  return pStr;
}