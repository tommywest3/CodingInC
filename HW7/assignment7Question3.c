//Thomas West 03/19/2021
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//function prototype
char* counter(char* pStr);

int main(void) {
  //allocate memory and create c string
  char* strPtr = malloc(1000 * sizeof(char));
  strPtr = "Hello 11 today is 15 and 23.4 is here and so is 63.4";
  //pass string to function
  counter(strPtr);
  //print in required format
  printf("The sum of all integers is %d; The sum of all doubles is %.2f\n", *strPtr);

}

//define function
char* counter(char* pStr) {
  int i, intCount, dbCount;
  //find integers
  for(i=0; pStr[i] != '\0'; i++) {
     if ((pStr[i] >= '0') && (pStr[i] <= '9')) {
	intCount += (pStr[i] - '0');
     }//find doubles???
     else if (pStr[i] == sizeof(double)) {
	dbCount += pStr[i];
     }
  }
  printf("The sum of all integers is %d; The sum of all doubles is %.2f\n", intCount, dbCount);
  //return pointer to string 
  return pStr;   
}