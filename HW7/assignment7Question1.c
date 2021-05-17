//Thomas West 03/19/2021
#include<stdio.h>
#include<stdlib.h>

int main(void) {
//a)
int* iPtr = malloc(sizeof(int));

//b)
double* dPtr = malloc(2 * sizeof(double));

//c)
//allocate memory 
int* aiPtr = malloc(5 * sizeof(int));
//initialize values
*aiPtr = 27;
*(aiPtr + 1) = 12;
*(aiPtr + 2) = 93;
*(aiPtr + 3) = 44;
*(aiPtr + 4) = 38;
int i;
//print values
  for(i=0; i <= 5; i++) {
	printf("%d ", *(aiPtr + i));
  }
printf("\n");
//d)
//allocate memory
char* cPtr = malloc(20 * sizeof(char));
//initialize values
*cPtr = 'H';
*(cPtr + 1) = 'i';
*(cPtr + 2) = 'm';
*(cPtr + 3) = 'y';
*(cPtr + 4) = 'n';
*(cPtr + 5) = 'a';
*(cPtr + 6) = 'm';
*(cPtr + 7) = 'e';
*(cPtr + 8) = 'i';
*(cPtr + 9) = 's';
*(cPtr + 10) = 'T';
*(cPtr + 11) = 'h';
*(cPtr + 12) = 'o';
*(cPtr + 13) = 'm';
*(cPtr + 14) = 'a';
*(cPtr + 15) = 's';
*(cPtr + 16) = 'H';
*(cPtr + 17) = 'i';
*(cPtr + 18) = 'Y';
*(cPtr + 19) = 'a';
//print values
  for(i=0; i <= 20; i++) {
	printf("%c ", *(cPtr + i));
  } 
printf("\n");
free(cPtr);

//e)
int x;
int k, j;
//allocate memory for array of pointers
int** dcPtr = malloc(5 * sizeof(int*));
//allocate memory for size of matrix
*dcPtr = malloc(sizeof(int) * 5 * 5); 
//position memory
  for(i=0; i <= 5; i++) {
     *(dcPtr + i) = (*dcPtr + j * i);
  }
//initialize random values 
  for(i=0; i <= 5; k++){ 
    for(x=0; x <= 5; j++) {
     srand((unsigned int)time(NULL));
     *(*(dcPtr + i) + x) = (rand() % 25);
    }
  }
//print the matrix
  for(i=0; i <= 5; i++) {
    for(x=0; x <= 5; x++){ 
       printf("%d ", *(*(dcPtr + i) + x));
    }
    printf("\n");
  }



//f
int* singPtr = malloc(5 * 5 * sizeof(int));

//initialize random values
  for (i=0; i <= 5; i++) {
    for (x=0; x <= 5; x++) {
       srand((unsigned int)time(NULL));
       *(singPtr + i * 5 + x) = (rand() % 25);
    }
  }
//print the matrix
  for (i=0; i <= 5; i++) {
    for (x=0; x <= 5; x++) {
       printf("%d ", *(singPtr + i * 5 + x));
    }
    printf("\n");
  }
}