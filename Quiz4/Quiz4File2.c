// Program to read integers into a 3X3 matrix and display them
// Todo: Fix bugs and makesure program works as intended.
// for each bug fix, add a comments specifying what you fixed.
// Number of errors/bugs = 12


#include <stdio.h>

display(int Matrix[3][3], int size);//8 remove void

int main(void) {
	int size=3;
	int Matrix[size][size];//take out -1
	printf("Enter 9 elements of the matrix:\n");
	int i = 0; //3 need ;
	for (i = 0; i < size; i++) //5 and 6 need ; in for loop
    {
      int j = 0;
      for (j = 0; j < size; j++){//j = 0
        scanf("%d", &Matrix[i][j]);//1 need ; not : 12 %d not %f
      }
    }
	display(Matrix,3);//9 remove &
	return 0;
}

display(int Matrix[3][3], int size) {//2 should be int not char 4 not void 7 should be int
	int i;//10 and 11 declare i and j outside of for loop
	int j;
	for (i = 0; i < size; i++) {
		for (j = size+1; j > 1; j--)//j should be greater than 1 
        {
            printf("%d, ", Matrix[i][size-j+1]);//put i instead of j
        }
        printf("\n");
	}
    
}