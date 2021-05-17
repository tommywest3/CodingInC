//Thomas West 3/26/2021
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


int main(void) {

struct patientinformation {
  char patient_name[ 20 ];
  char* abbreviated_name;
  unsigned int age;
struct {
  char phone_number[ 11 ];
  char address[ 60 ];
  char city[ 20 ];
  char state[ 3 ];
  int zipCode;
} physical_address;

bool istested;

struct {
  char* test_date;
  bool istested_positive;
} covid_results;
} healthrecord, *healthrecord_ptr;
 
healthrecord_ptr = &healthrecord;


struct patientinformation* patientinformation = (struct patientinformation*)malloc(sizeof(struct patientinformation*));

healthrecord.abbreviated_name = malloc(20 * sizeof(char));

healthrecord_ptr->covid_results.test_date = malloc(20 * sizeof(char));

//a
printf("A\n");
strcpy(healthrecord.patient_name, " Tommy");
printf("%s\n", healthrecord.patient_name);

//b
printf("B\n");
strcpy(healthrecord_ptr->patient_name, " Tommie");
printf("%s\n", healthrecord_ptr->patient_name); 

//c
printf("C\n");
strcpy(healthrecord.abbreviated_name, " Tom");
printf("%s\n", healthrecord.abbreviated_name);

//d
printf("D\n");
strcpy(healthrecord_ptr->abbreviated_name, " T");
printf("%s\n", healthrecord_ptr->abbreviated_name);

//e
printf("E\n");
char* abbr[4];
strcpy(abbr, " C291");
healthrecord_ptr->abbreviated_name = abbr;
printf("%s\n", healthrecord_ptr->abbreviated_name);

//f
printf("F\n");
healthrecord.physical_address.zipCode = 72364;
printf("%d\n", healthrecord.physical_address.zipCode);

//g
printf("G\n");
healthrecord_ptr->physical_address.zipCode = 28956;
printf("%s\n", healthrecord_ptr->physical_address.address);

//h
printf("H\n");
healthrecord.istested = true;
printf("%d\n", healthrecord.istested); 

//i
printf("I\n");
healthrecord.covid_results.istested_positive = true;
printf("%d\n", healthrecord.covid_results.istested_positive);

//j
printf("J\n");
strcpy(healthrecord_ptr->covid_results.test_date, "1/05/2021");
printf("%s\n", healthrecord_ptr->covid_results.test_date);

//k
int i;
printf("K\n");
char* arr[5] = {"26754", "45632", "87453", "90281", "14325"};
*arr = healthrecord_ptr->physical_address.zipCode;  
  for (i=0; i<5; i++) {
     printf("%d \n", (healthrecord_ptr + i)->physical_address.zipCode);
  }

//l
printf("L\n");
struct patientinformation *patient;
struct patientinformation *ptr;
ptr = &patient;
  for (i=0; i<5; i++) {
     (ptr + 1)->istested = true;
      printf("%d\n", (ptr + 1)->istested);
  }
 return 0;
}