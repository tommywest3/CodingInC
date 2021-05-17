//Thomas West 2/18/2021

#include<stdio.h>

//declare functions
int is_prime(int n);
int is_fib_prime(int n);

int main() {

	//call functions
	is_fib_prime(20);
	is_prime(20);

}

//define function to check if n is prime or not 
int is_prime(int n) {

int i = 2;
int checker = 0;
	//loop to see if number mod incrementer will be 0	
	for (i; i <= n / 2; ++i) {
		if (n % i == 0) {
		  checker = 1;
		}
	}
	if (n <= 1) {
	  printf("Anything less than 1 is not prime");
	}
	else {
	  if (checker != 1) {
		printf("%d is prime\n", n);
	  }
	  else {
	  	printf("%d isn't prime\n", n);
	  }
	}
}

//define function for fibonacci sequence (iterative version)
int is_fib_prime(int n) {

  int f1 = 0;
  int f2 = 1;
  int f;
  int i = 0;
	
  for (i; i <= n; ++i) {
	//make sure it prints the first 0 and 1
	if (i <= 1) {
	  f = i;
	}
	else {
	f = f1 + f2;
	f1 = f2;
	f2 = f;
	}
	//print all Fibonacci numbers until n with newlines
	printf("%d\n", f);	
}	
  is_prime(f);
}