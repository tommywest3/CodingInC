//Thomas West 2/12/2021

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"file1.h"
//declare function
double print_statement(int num_of_employees);
//call function
int main() {
	
	print_statement(5);

}//main closing brace

//define function
double print_statement(int num_of_employees) 
{
srand(time(NULL));//to get random sales and years everytime

//initialize variables
char names[] = "ABCDEFGHIJKLMNO";
int i;
double saleEmp[5];
double yearEmp[5];
int sales;
int saleLow = 1000, saleHigh = 10000;
int year;
int lowYear = 1, highYear = 30;
double comm;
double bonus;
double profit;
double fedW;
double stateW;
double retireC;
double netPay;
double totNet;
double totSale;
double totProfit;
double totComm;
double totBonus;
double totFed;
double totState;
double totRetire;

//Get random sales and years and put into two different arrays
for (i = 0;i <= num_of_employees; i++){
        sales = (rand() % (saleHigh-saleLow+1) + saleLow);
        saleEmp[i] = (double)sales;
        year = (rand() % (highYear-lowYear+1) + lowYear);
        yearEmp[i] = (int)year;
}
//loop through array to calculate total sales
for (i = 0; i < num_of_employees; i++) {
        totSale += saleEmp[i];
}
	//calculate total profits
	totProfit = totSale * 0.45;
//formatting
printf("\nMONTHLY STATEMENT\t(JANUARY 2021)\n");
printf("\t\t\t\t\t\t\t\t\tBloomington Skating Company\n");
printf("\t\t\t\t\t\t\t\t\t\t    Bloomington, IN\n");
printf("\t\t\t\t\t\t\t\t\t      Phone: (812)-855-0000\n");
printf("MONTHLY SALES:\t%.2f\n", totSale);
printf("MONTHLY PROFIT:\t%.2f\n", totProfit);

for (;i<=100;i++){
	printf("=");
}	
	printf("\nName\tCommission\tBonus\t      Fed W.\t     ST W.\t      RT\t      Net Pay\n");
for (i = 0;i<=100;i++){ 
	printf("-");
}
//Make calculations for final product 
for (i = 0;i <= num_of_employees; ++i) {
	
	comm = saleEmp[i] * 0.125;
	
	//include bonus into calculations
	if (yearEmp[i] <10) {
		bonus = totProfit * 0.1;
	}
	else if (yearEmp[i] >=10 && yearEmp[i]<20) {
		bonus = totProfit * 0.15;
	}
	else if (yearEmp[i] >=20 && yearEmp[i]<30) {
		bonus = totProfit * 0.2;
	}
	else {
		bonus = totProfit * 0.25;
	}

  fedW = (comm + bonus) * fed;
  stateW = (comm + bonus) * state;
  retireC = (comm + bonus) * retire;
  netPay = ((comm + bonus) - fedW - stateW - retireC);
  totComm += comm;
  totBonus += bonus;
  totFed += fedW;
  totState += stateW;
  totRetire += retireC;
  totNet += netPay;

//loop through all employees and put numbers in proper place
printf("\nEmp %c:\t%.2f\t       %.2f\t     %.2f\t     %.2f\t      %.2f\t      %.2f\n", names[i], comm, bonus, fedW, stateW, retireC, netPay);
}
for (i = 0;i<=100;i++){
        printf("-");
   
}

//output totals
printf("\nTotal\t%.2f\t      %.2f\t     %.2f\t     %.2f\t       %.2f\t       %.2f\n", totComm, totBonus, totFed, totState, totRetire, totNet);

for (i = 0;i<=100;i++){
        printf("-");
}

//output net profits and put branch manager 
printf("\nNet Profit (Profit - Bonus): %.2f\n", totProfit - totBonus);
printf("Thomas West, Branch Manager\n");

}