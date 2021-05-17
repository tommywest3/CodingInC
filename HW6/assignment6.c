//Thomas West 03/12/2021

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int rating();

int main(void) {
 
  //initialize arrays and variables
  char* topics[] = {"Environmental Issues", "Gun Laws", "Foreign Affairs", "Immigration", "Abortion", "Death Penalty", "Climate Change"};
  int rate, total = 0;
  int row = 7, column = 10, i = 0, j = 0;
  double average;
  int pointLow = 10000, pointHigh = -10000, pointLowIndex = -1, pointHighIndex = -1;
  int response[row][column];

  //ask user for input rating
  for (i = 0; i < column; ++i) {
     printf("\nUser #%d\n", (i+1));
     printf("Please rate each issue on a scale of 1 (Least Important) to 10 (Most Important)\n");
  for (j = 0; j < row; ++j) {
     printf("%s: ", *(topics + j));
     *(*(response + j) + i) = rating();
   }
  }
  printf("\n");
  
  //find the total
  for (i = 0; i < row; ++i) {
     printf("\n%20s\t", *(topics + i));
     for (j = 0; j < column; ++j) {
        printf("%d ", *(*(response + i) + j));
        total += *(*(response + i) + j);
     }   
  }
  column = 10;
  //calculate the average
  average = ((double) total) / column;
  printf("\nThe average is: %.2f\n", average);
  if (total < pointLow) {
     pointLow = total;
     pointLowIndex = i;
  }
  if (total > pointHigh) {
     pointHigh = total;
     pointHighIndex = i;
  }
//print out the highs and lows as well as how many people responded 
printf("\nThe highest point total received was for %s at %d points\n", *(topics + (pointHighIndex-1)), pointHigh);
printf("\nThe lowest point total received was for %s at %d points\n", *(topics + (pointLowIndex-1)), pointLow);
printf("\nThere were %d people who responded\n", 10);
return 0;
}

//function to return rating and catch bad numbers
int rating() {
  int point;
  for(;;) {
     scanf(" %d", &point);
     if (point <= 0 || point >= 11) {
        printf("Please make sure to input a rating from 1-10\n");
        continue;
     }
     else {
        break;
     }
  }
  return point;
}