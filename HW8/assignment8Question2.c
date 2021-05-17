//Thomas West 3/26/2021

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h> 

//function prototypes / definintions
int BMI(int lbs, int inches) {
  int bmi;
  bmi = (lbs * 703) / (inches * inches);
  return bmi;
}

int ageInyears(int birYear) {
  int currYear = 2021;
  int age;
  if (currYear > birYear) {
    age = currYear - birYear;
  }
 return age;
}

int heartRate(int birYear) {
  int max;
  int target;
  max = 200 - ageInyears(birYear);
  target = 0.60 * max;
  printf("Your max heart rate is %d and your target heart rate should be %d\n", max, target); 
}

//main  
int main(void) {

//create structure
struct HealthProfile {
  char *Fname[20];
  char *Lname[20];
  char *gender[6];

 struct DOB {
  int month;
  int day;
  int year;
 }DOB;

  int *height;
  int *weight;

 struct history {
  bool heartProb;
  bool bloodPress;
  bool cancer;
 }history;

} users = {"Joe", "Guy", "Male", "2", "16", "1987", "68", "192", "1", "0", "0", "Mary", "Friend", "Female", "8", "3", "1974", "62", "152", "0", "0", "0", "Nick", "Jones", "Male",
  "3", "20", "1995", "74", "205", "0", "0", "1", "Terri", "Smith", "Female", "10", "12", "1973", "63", "151", "0", "1", "0", "Jerry", "Williams", "Male", "4", "20", "2000", "71", 
  "210", "0", "0", "1", "Archie", "Plug", "Male", "6", "1998", "69", "190", "0", "1", "0", "Carly", "Fun", "Female", "5", "24", "2000", "63", "124", "0", "0", "0", "Alex", "Key",
  "Male", "1", "1", "1999", "67", "203", "0", "1", "0", "Garret", "String", "Male", "11", "22", "1990", "75", "220", "1", "0", "0", "Jessica", "Paul", "Female", "3", "1", "2000",
  "59", "115", "0", "1", "0"}, *userPtr;
//initialize values in structure

userPtr = &users;


//allocate memory
struct users* HealthProfile = (struct users*)malloc(sizeof(struct users*));

//Begin asking for information
printf("Welcome to the Health Record generator!\n\n");
printf("Please input your first name: \n");
scanf(" %s", &users.Fname);
printf("%s\n", users.Fname);

printf("Please input your last name: \n");
scanf(" %s", users.Lname);
printf("%s\n", users.Lname);

printf("Please input your gender from birth (Male or Female): \n");
scanf(" %s", users.gender);
printf("%s\n", users.gender);

printf("Please input your birth month as a number: \n");
scanf(" %d", &users.DOB.month);
printf("%d\n", users.DOB.month);

printf("Please input your birth day: \n");
scanf(" %d", &users.DOB.day);
printf("%d\n", users.DOB.day);

printf("Please input your birth year: \n");
scanf(" %d", &users.DOB.year);
printf("%d\n", users.DOB.year);

printf("Please input your height (in inches): \n");
scanf(" %d", &users.height);
printf("%d\n", users.height);

printf("Please input your weight (in pounds): \n");
scanf(" %d", &users.weight);
printf("%d\n", users.weight);

printf("Has your family ever had heart problems? (1 = True, 0 = False): \n");
scanf(" %d", &users.history.heartProb);
printf("%d\n", users.history.heartProb);

printf("Has your family ever had blood pressure issues? (1 = True, 0 = False): \n");
scanf(" %d", &users.history.bloodPress);
printf("%d\n", users.history.bloodPress);

printf("Has your family ever had cancer? (1 = True, 0 = False): \n");
scanf(" %d", &users.history.cancer);
printf("%d\n", users.history.cancer); 

printf("Names of Patients: %s %s\n", users.Fname, users.Lname);
printf("Your age in years is: %d\n", ageInyears(users.DOB.year));
printf("Your BMI is: %d\n", BMI(users.weight, users.height));
heartRate(users.DOB.year);
  if (users.history.heartProb == 1 && users.history.bloodPress == 1 && users.history.cancer == 1) {
  if (BMI(users.weight, users.height) < 18.5 || BMI(users.weight, users.height) < 30){
    if (ageInyears(users.DOB.year) > 50) {
      printf("Your age in years is: %d\n", ageInyears(users.DOB.year));
      printf("Your BMI is: %d\n", BMI(users.weight, users.height));
      heartRate(users.DOB.year);
    }
  }
  }
return 0;
}