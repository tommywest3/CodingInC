//Thomas West 2/18/2021

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long int lrand48(void);

int main(void) {

long int days[10000];
float matches = 0;
float prob;
int trials = 10000;
float n = 23;
bool x = false;
int k = 0, i, j;
//make sure that each number generated is random
srand((unsigned int)time(NULL));
//put numbers into array for each trial
for (k; k < trials; ++k) {
	//compute the day of birth for each person
	for(i = 0; i < n; ++i) {
      	  days[i] = rand() % 365 + 1;
    	}
	for(i = 0; i < n - 1; ++i) {
      	  for(j = i + 1; j < n; ++j) {
        //check for duplicates and evaluate the trial
	if(days[i] == days[j]) {
          x = true;
          break;
  }
 }
}
   if(x != false)
    matches++;
  //reset the boolean to false
  x = false;
}
//output data 
prob = matches / trials;
printf("The least amount of people to yield the break-even point is 23.\n");
printf("Out of %d people, the percentage to have a match is %.0f%\n", trials, prob* 100);
return 0;
}