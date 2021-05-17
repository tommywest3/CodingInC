//Thomas West 04/09/2021

//http://www.java2s.com/Code/C/Function/Arrayoffunctionpointer.htm
//help with array of function pointers
#include <stdio.h>
  
  //function prototypes
  int sum(int x, int y);
  int subt(int x, int y);
  int mult(int x, int y);
  int div(int x, int y);
  int rem(int x, int y);
  int power(int x, int y);
  //declare a pointer to array of functions
  int (*ptr[6]) (int a, int b);

int main() {
  //declare variables
  int num1, num2;
  int answer;
  char symbol;
  
  //set array of functions equal to correct function
  ptr[0] = sum;
  ptr[1] = subt;
  ptr[2] = mult;
  ptr[3] = div;
  ptr[4] = rem;
  ptr[5] = power;

  //prompt user for values
  printf("Please enter two values: \n");
  scanf(" %d %d", &num1, &num2);
  
  //prompt user for operator
  printf("Enter the operating symbol to use (+,-,*,/,%,^): \n");
  scanf(" %c", &symbol); 

  //switch case for each operator
  switch(symbol) {
    case '+' :
      answer = (*ptr[0]) (num1, num2);
      break;
    case '-' :
      answer = (*ptr[1]) (num1, num2);
      break;
    case '*' :
      answer = (*ptr[2]) (num1, num2);
      break;
    case '/' :
      answer = (*ptr[3]) (num1, num2);
      break;
    case '%' :
      answer = (*ptr[4]) (num1, num2);
      break;
    case '^' :
      answer = (*ptr[5]) (num1, num2);
      break;
    default :
      printf("Invalid operator symbol\n");
  }
  
  //print results
  printf("The result is: %d\n", answer);

return 0;
}

//addition function
int sum (int x, int y) {
  return x + y;
}

//subtraction function
int subt (int x, int y) {
  return x - y;
}

//multiplication function
int mult (int x, int y) {
  return x * y;
}

//division function
int div (int x, int y) {
  return x / y;
}

//remainder function
int rem (int x, int y) {
  return x % y;
}

//power of function
int power (int x, int y) {
  int ans = 1;
  
  for (y; y > 0; y--) {
  ans *= x;
  }
  
  return ans;
}