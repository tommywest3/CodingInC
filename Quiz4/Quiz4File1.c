// Program to read 3-dimensional matrix and display the elements as 1x9 matrix
// Review the slide titled "Mmeory Organization of Arrays in Ch6" for more details
// TODO
// User may specify any number of rows, columns and depth. Use those to create matrix
// initize matrix using update_ed method
// display method must not be able to modify array elements (update the code as needed)
// display method must use a single loop/iterator to print the entire array with addresses
// display cannot use nested loops
// 

#include <stdio.h>
#define SIZE 3

void update_3d(double Matrix_3d[][SIZE][SIZE], int size); 
void display_1d(double Matrix_3d[][SIZE][SIZE], int size); 

int main(void) {
	//prompt the use to enter appropriate dimensions and initializ the matrix accordingly
	double Matrix_3d[SIZE][SIZE][SIZE] = {};
	//initialize the array to non-zero values (use scanf or random numbers generator)
	update_3d(Matrix_3d, SIZE);
	//display the values
	display_1d(Matrix_3d, SIZE);
	return 0;
}

void update_3d(double matrix[][3][3], int size) {
	printf("Enter 27 elements of the matrix:\n");
	int i=0;
	for (; i < SIZE; i++)
    {
      int j = 0;
      for (; j < SIZE; j++)
	  {
	      int k = 0;
	      for (; k < SIZE; k++)
		  {
	        //scanf() for Matrix_3d[i][j][k]
	      scanf(" %lf", &matrix[i][j][k]); 
	      }
      }
    }
}


//update as needed. 1 for loop only with 1 iterator to print all values with addresses
//must not be able to update the array.
//Share any observations.
void display_1d(double matrix[][SIZE][SIZE], int size) {
	
	int i;
	for (i= 0; i < SIZE * SIZE * SIZE; i++) {//multiply size of matrix dimensions to stop loop
       	printf("%p (%.2lf) ", &matrix[0][0][i], matrix[0][0][i]);//output memory address and digit entered by user
        printf("\n");
    }
}