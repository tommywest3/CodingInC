// Thomas West 2/3/2021 

#include <stdio.h>

int main(void){
  char input;
  int salary;
  int otcredit;
  int Aweek;
  int Sweek;
  int Rweek;
  int Jweek;
  int Tweek;
  int Hweek;
  int Amon;
  int Smon;
  int Rmon;
  int Jmon;
  int Tmon;
  int Hmon;                        //Create Variables
  int Ahour;
  int Shour;
  int Rhour;
  int Jhour;
  int Thour;
  int Hhour;
  
  //Stop the program when "Q" is input
  while(input != 'Q') {

  //Welcome Message and instructions on how to use program
  printf("Please input the appropriate paycode letter (Case Sensitive). \nPaycodes Include:\n\tAdministrator      (A) Salary\n\tStaff              (S) Salary and Overtime\n\tRegular Faculty    (R) Salary and 3-credit extra hours\n\tAdjunct            (J) Credit Hours and 3-credit extra hours\n\tTeaching Assistant (T) Credit Hours and Overtime\n\tHourly Worker      (H) Hourly Pay and Hours Worked a Week\n\tQuit               (Q)\nEnter Paycode: ");   
  scanf(" %c", &input);
  //Get Paycode and move on to switch cases where more information will be prompted and weekly and monthly payments are calculated and hourly rates are calculated
  switch(input){
  case 'A':
	printf("Please enter the Administartors annual salary: ");
	scanf(" %d", &salary);
	Aweek = salary / 52;
	Amon = salary / 12;
	Ahour = salary / 2080;
	printf("This Administrator's weekly payment is %d, monthly payment is %d, and hourly rate is %d.", Aweek, Amon, Ahour);
	break;
  case 'S':
	printf("Please enter the Staff Workers annual salary, then overtime hours: ");
	scanf(" %d %d", &salary, &otcredit);
	if (otcredit > 10) {
		printf("staff can’t work more than 10 hours of overtime per month.");
	}
	else {
		Sweek = (salary / 52) + (.75 * otcredit);
		Smon = (salary / 12) + (.75 * otcredit);
		Shour = salary / 2080;
	}
	printf("This Staff Worker makes %d weekly, %d monthly, and %d hourly.", Sweek, Smon, Shour); 
        break;
  case 'R':
	printf("Please enter the Regular Faculty's salary and how many 3-Credit courses they are teaching: ");
	scanf(" %d %d", &salary, &otcredit); 
	if (otcredit > 1) {
		printf("Regular Faculty can only teach one extra 3-credit hour course per semester");
	}
	else {
		Rweek = (salary / 43) + (8500 * otcredit);
		Rmon = (salary / 10) + (8500 * otcredit);
		Rhour = salary / 1720;
	 printf("This Regular Faculty Member weekly makes %d, %d monthly, and %d hourly.", Rweek, Rmon, Rhour);
	} 
	break;
  case 'J':
	printf("Please enter how many 3-Credit Hour courses and extra 3-Credit Hour courses the Adjunct is teaching: ");
	scanf(" %d %d", &salary, &otcredit); 
	if (otcredit  > 1) {
		 printf("adjuncts can only teach one extra 3-credit hour course per semester");
	}
	else {
		Jweek = ((8500 * salary) + (8500 * otcredit) / 21);
		Jmon = ((8500 * salary) + (8500 * otcredit) / 5);
		Jhour = (8500 * salary) / 840;
	printf("This Adjunct makes %d weekly, makes %d monthly, and makes %d hourly.", Jweek, Jmon, Jhour);
	}
	break;
  case 'T':
	printf("Please enter how many credit hours and overtime this Teacher's Assistant has: ");
	scanf(" %d %d", &salary, &otcredit);
	Tweek = ((2500 * salary) + (otcredit / 2) / 21);
	Tmon = ((2500 * salary) + (otcredit / 8) / 5);
	Thour = (2500 * salary) / 210; 
	printf("This Teacher's Assistant is weekly paid %d, monthly paid %d, with an hourly rate of %d.", Tweek, Tmon, Thour);
	break;
  case 'H':
	printf("Please enter the hourly pay and hours per week for this Hourly Worker: ");
	scanf(" %d %d", &salary, &otcredit);
	if (otcredit <= 20){
		Hweek = salary * otcredit;
		Hmon = ((1040 - otcredit) * salary) / 12; 
		Hhour = salary;
	}
	else {
		Hweek = ((otcredit - 20) + (salary * 1.5)) + (salary * otcredit);
		Hmon = ((otcredit - 20) + (salary * 1.5) + ((2080 - otcredit) * salary)) / 12;
		Hhour = salary;
	}   
	printf("This Hourly Worker makes %d weekly, %d monthly, and %d an hour.", Hweek, Hmon, Hhour);
	break;
  default:
	break;
  }; //switch case brace
} //while loop brace
  //Create print statements for the averages
  printf("The average weekly and monthly salaries for the first type of employeeare %d and %d.", ((Aweek + Sweek) / 2), ((Amon + Smon) / 2));
  printf("The average weekly and monthly salaries for the second type of employee are %d and %d.", ((Rweek + Jweek + Tweek) / 3), ((Rmon + Jmon + Tmon) / 3));
  printf("The average weekly and monthly salaries for the third type of employee are %d and %d.", Hweek, Hmon);
  printf("The average pay rate for the first type of employee is %d.", (Ahour + Shour) / 2);
  printf("The average pay rate for the second type of employee is %d.", (Rhour + Jhour + Thour) / 3);
  printf("The average pay rate for the third type of employee is %d.", Hhour);
     
  return 0;
}//int main brace