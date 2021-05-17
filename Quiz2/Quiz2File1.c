// The factorial of an integer is the product of the number with all
// the positive integers below it.

// For example: Factorial of 5 = 5 * 4 * 3 * 2 * 1 = 120

// Number of errors/bugs = 7

//TODO: Fix the bugs and make sure the program runs as expected.
//Provide a brief comment identifying each bug fixed.

#include<stdio.h>

int factorial(int);

int main(void) {
	int n,fact;
	printf("Debugging Practice 1 - Quiz 3, Q3\n\n");
	printf("Please enter the number whose factorial you wish to find: ");
	scanf(" %d", &n);//n is an integer not float, also in scanf argument needs "&"
	fact = factorial(n);
	printf("The factorial of %d is %d\n", n, fact);//fact is an integer not a character
}


int factorial(int number) {//the argument for the function should be consistent with the data type for the variable
  if(number == 0 || number == 1) {//include brace for if statement, and create error catcher
     return 1; //the factorial of 1 and 0 are 1
} 
  else if (number < 0) {
     printf("Negative factorials are not defined");
}
   else { //create an else statement    
     return (number * factorial(number-1));//put parantheses around calculation
} 
}//end brace for function definition