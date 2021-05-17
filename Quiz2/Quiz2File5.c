/* Instructions:
 *
 *
 1. Write a program to assign a grade to Student. 
	Get the number of assignmnets from user.
  Get the students score out of how many points for each assignmnet.
	Calculate percentage and return the grade associated with a range of marks.
 2. The overall score range and the associated grades are as follows:
     a. [97-100] = A+
     b. [90-97] = A
     c. [80-90] = B
     d. [70-80] = C
     e. less than 70 is a failing grade and should be given an F
     e. greater than 100 or less than 0 is invalid and your code should print "Invalid"
 3. Use the skeleton code provided below to create a new function "printGrade" to assign a grade based on the score ranges.
 4. Use print statements in your function to display the grade. For example, if the input marks is 77, the output should read:
        "Your grade is : C"
 5. Please adhere to standard C syntax conventions and use comments to explain your code. Failure to do so will result in a penalty.
 *
 *
 * */
#include<stdio.h>

void printGrade(int percent){
  if (percent >= 97 && percent <= 100) {
        printf("Your grade is: A+");
}
  else if (percent < 0) {
        printf("Invalid");
}
  else if (percent > 101) {
        printf("Invalid");
}
  else if (percent >= 90 && percent < 97) {
        printf("Your grade is: A");
}
  else if (percent >= 80 && percent < 90) {
        printf("Your grade is: B");
}
  else if (percent >= 70 && percent < 80) {
        printf("Your grade is: C");
}
  else {
        printf("Your grade is: F");
}
}//print the students grade based on their score in the class
//define and declare function printGrade 
int main(void){
	char ch;
	float score;
	float studentScore;
	int assignments;
	int percent;
	int counter;
	do {
		printf("How many assignmnets did you have? ");
                scanf(" %d", &counter);
		assignments = counter;
    //get the number of assignmnets from the student
            for(;counter > 0;counter--){  
		printf("Enter your score for all assignments out of 100 (one by one): " );
		scanf(" %f", &score);
		studentScore += score;
	    }
    //get the student's score and the max score for each assignment 	        
		percent = ((float)studentScore / ((int)assignments * 100) * 100); 
    //calculate the student's percentage in the class using the information you've gathered.
		printGrade(percent);
    //include function in main
		printf(" \n Do you want to continue? (Y/N) ");
		scanf(" %c",&ch);
	} while(ch == 'y'|| ch == 'Y');
 return 0;
}