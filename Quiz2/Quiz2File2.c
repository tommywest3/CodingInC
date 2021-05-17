// Program to count the input characters. 
// It reads the input from the keyboard until user hits ENTER
// and then prints it on screen.  
// Number of errors/bugs = 13

//TODO: Fix the bugs and make sure the program runs as expected.
//Provide a brief comment identifying each bug fixed.

#include<stdio.h>
void main(void) //
{
	char c; //declare c as a variable
	int i, count = 0; //declare i and make count = 0 
	
	for (i=0; c != '\n'; i++)//c should equal newline to end loop 
	{
		count++; //count should increment up
		c = getchar();//getchar() should be in the block of the loop
		putchar(c);
 	} 
 	printf("\n num of chars including spaces: %d\n",count-1);//change count to count - 1
	  //\n is the correct escape character and ':' needs to be ','
 	return; //return instead of return 1 
}