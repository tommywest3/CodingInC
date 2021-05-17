// Fig. 5.16: fig05_16.c
// Scoping.

//Todo: Modify the code to print memory addresses of all variables/array elements and
//explain the impact of "static" keyword. Also use an extern variable and discuss how
//it impacts the memory address. Why?

#include <stdio.h>

void useLocal(void); // function prototype
void useStaticLocal(void); // function prototype
void useGlobal(void); // function prototype

//static has the ability to limit the scope of variables
extern int j;//extern variable changes the memory address of x extern takes up memory
int x = 1; // global variable

int main(void)
{
   int x = 5; // local variable to main

   printf("local x in outer scope of main is %p\n", &x);

   { // start new scope                                     
      int x = 7; // local variable to new scope               
                                                                  
      printf("local x in inner scope of main is %p\n", &x);     
   } // end new scope                                          

   printf("local x in outer scope of main is %p\n", &x);

   useLocal(); // useLocal has automatic local x
   useStaticLocal(); // useStaticLocal has static local x
   useGlobal(); // useGlobal uses global x
   useLocal(); // useLocal reinitializes automatic local x
   useStaticLocal(); // static local x retains its prior value
   useGlobal(); // global x also retains its value

   printf("\nlocal x in main is %p\n", &x);
} 

// useLocal reinitializes local variable x during each call
void useLocal(void)
{
   int x = 25; // initialized each time useLocal is called

   printf("\nlocal x in useLocal is %p after entering useLocal\n", &x);
   ++x;
   printf("local x in useLocal is %p before exiting useLocal\n", &x);
} 

// useStaticLocal initializes static local variable x only the first time 
// the function is called; value of x is saved between calls to this
// function
void useStaticLocal(void)
{
   // initialized once 
   static int x = 50;                        

   printf("\nlocal static x is %p on entering useStaticLocal\n", &x);
   ++x;
   printf("local static x is %p on exiting useStaticLocal\n", &x);
}

// function useGlobal modifies global variable x during each call
void useGlobal(void)
{
   printf("\nglobal x is %p on entering useGlobal\n", &x);
   x *= 10;
   printf("global x is %p on exiting useGlobal\n", &x);
}
