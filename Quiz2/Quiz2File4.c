// Program to calculate the power of given equation - > x^n
// example - 2^10 -> 1024
// Number of errors/bugs = 13

//TODO: Fix the bugs and make sure the program runs as expected.
//Provide a brief comment identifying each bug fixed.

#include<stdio.h>

double my_power(int m, int n);//get rid of third argument and make double not void

void main(void) 
{
		int x =2;
		int n = 10;//should be int not char
		int return_value_function;

		return_value_function = my_power(x, n);
		printf("The power value of %d ^ %d is :: %d \n", x,n,return_value_function);
		return; //make return not return 0
}


//the return value of your func should be x^n result
double my_power(int x, int n) {//change char to int
    if(n == 0){ //if statement needs braces and to equal 0
        return 1.0;
    }
    else if(n == 1){//made else if with braces
        return n;
    }
    double ans = 1.0;//define ans as a double	
    ans = x;//initialize ans = x
    int m = n<0 ? -n : n;//'?' comes before ':' 
    int cur = 1.0;//1 is an int
    while(cur < m) {
        cur += 1;//increment the current number by 1
        ans *= x;//multiply and assign the x to ans
    }
   // ans *= my_power(n, (int)(m-cur));
    return  n>0 ? ans : 1.0/ans;//'?' comes before ':' and flip '<' to '>'
}
