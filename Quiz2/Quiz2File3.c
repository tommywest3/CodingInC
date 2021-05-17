// Program to check if the given number is a palindrome
// Number of errors/bugs = 15

//TODO: Fix the bugs and make sure the program runs as expected.
//Provide a brief comment identifying each bug fixed.

#include<stdio.h>
#include<stdbool.h> //call this to make sure true or false returns in the function

int func(int n);//should be int instead of char and int instead of void

void main(void) {
        int return_value_function = 1001;//return_value_function should be an int        


        return_value_function = func(return_value_function);//func4 should be func
        if (return_value_function){
                printf("It is not a palindrome \n");
        }
        else{
               printf("It is a palindrome \n");
        }
		
  return; //add semicolon to return and take out the '0'
}


//the return value of your func should be true / false only
int func(int n)//omit char w and replace void with int
{
                int given_number;
                int remainder;
                int temp;//temp should be defined

                while (n != 0) {
                        remainder = n % 10;//modulus instead of division sign
                        temp = temp * 10 + remainder;//do multiplication for temp and 10 instead of addition
			n /= 10; //change '-' to '/'
                        
                }

                if (given_number == temp)
                {
                        return true;//Flip True and False
                }
                else
                {
                        return false;
                }
}