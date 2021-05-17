//Thomas West 04/09/2021

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30
int update = 30;

//structes used
typedef struct patient {
  char lastName[15];
  char firstName[15];
  char gender;
  struct covidData *covidInfo;
} patients;

struct covidData { 
    bool isCovidPositive;
    char testDate[15];
};

//function prototypes
void mainMenu();
void read(FILE *pfPtr, patients* records);
void write(FILE *pfPtr, struct patient records[30]);
void seek(patients* records);
void createPatient(patients* records);
void delete(patients* records); 

int main(void) {
  //file pointer
  FILE *pfPtr;
  //dynamic memory allocation
  patients* records = malloc(sizeof(patients) * SIZE);
  
  read(pfPtr, records);

  //main menu 
  while (true) {
    char Option;
    mainMenu();
    
    scanf(" %c", &Option);

    if (Option == 'C') {
      printf("Create a new patient here\n");
      createPatient(records);
      break;
    }
    if (Option == 'S') {
      printf("Search for a patient here\n");
      seek(records);
      break;
    }
    if (Option == 'Q') {
      delete(records);
      write(pfPtr, records);
      free(records);
      return false;
    }
    else {
    printf("Please input a valid option with a capital letter\n");
    }
  }
}

//main menu definition
void mainMenu() {
  printf("Please select an option from the list:\nCreate a new patient - C\nSearch for an existing patient - S\nQuit - Q\n"); 
}

//read file definition
void read(FILE *pfPtr, patients* records) {
  if ((pfPtr = fopen("nameage.dat", "r+")) == NULL) {
    printf("This file cannot be opened.\n");
  }
  else {
    int i = 0;
    while (!feof(pfPtr)) {
      if (i+1 > SIZE) {
        //reallocate memory for records
        records = realloc(records, i * sizeof(patients));
        update++;
      }
    //Get data from file
    records[i].covidInfo = malloc(sizeof(struct covidData));
    fscanf(pfPtr,"%s %s %c %d %s\n", records[i].lastName, records[i].firstName, &records[i].gender, &records[i].covidInfo->isCovidPositive, records[i].covidInfo->testDate);
    i++; 
    }
  rewind(pfPtr);
  }
} 

//writing to file definition
void write(FILE *pfPtr, struct patient records[30]) {
  if ((pfPtr = fopen("nameage.dat", "w+")) == NULL) {
    printf("This file cannot be opened.\n");
  }
  else {
    int i =0;
    //write the data to the file
    for(i; i < update; i++) {
      fprintf("%s %s %c %d %s\n", records[i].lastName, records[i].firstName, &records[i].gender, &records[i].covidInfo->isCovidPositive, records[i].covidInfo->testDate);

      if (i != (update - 1)) {
        fprintf(pfPtr, "\n");
      }
    }
    rewind(pfPtr);
  } 
}

//search for patients definition
void seek(patients* records) {
  char lastName[15];
  char gender;
  int seekOption, i = 0, covidPos;
  bool search = false;
  //ask user for search method
  printf("Please input the number by which you would like to search\nLast Name - 1\nGender - 2\nCovid Result - 3\nLast Name and Gender - 4\nGender and Covid Result - 5\nCovid Result and Last Name - 6\n");
  scanf(" %d", &seekOption);
  //define methods of search
  if (seekOption == 1) {
    printf("Please input the last name of the patient in lowercase letters: \n");
    scanf(" %s", lastName);
  for (i; i < update; i++) {
     if (strcmp(records[i].lastName, lastName) == 0) {
        printf("%s %s %c %d %s\n", records[i].lastName, records[i].firstName, &records[i].gender, &records[i].covidInfo->isCovidPositive, records[i].covidInfo->testDate);
        search = true;
      }
  } 
  }
  if (seekOption == 2) {
    printf("Please input the gender of the patient(M/F): \n");
    scanf(" %c", &gender);
  for (i = 0; i < update; i++) {
     if (records[i].gender == gender) {
        printf("%s %s %c %d %s\n", records[i].lastName, records[i].firstName, &records[i].gender, &records[i].covidInfo->isCovidPositive, records[i].covidInfo->testDate);
        search = true;   
     }
  }
  }
  if (seekOption == 3) {
    printf("Please input the Covid result(1 = Yes, 0 = No): \n");
    scanf(" %d", &covidPos);
  for (i = 0; i < update; i++) {
     if (records[i].covidInfo->isCovidPositive == covidPos) {
        printf("%s %s %c %d %s\n", records[i].lastName, records[i].firstName, &records[i].gender, &records[i].covidInfo->isCovidPositive, records[i].covidInfo->testDate);
        search = true;
     }
  }
  } 
  if (seekOption == 4) {
    printf("Please input the last name of the patient in lowercase letters: \n");
    scanf(" %s", lastName);
    printf("Please input the gender of the patient(M/F): \n");
    scanf(" %c", &gender);
  for (i = 0; i < update; i++) {
     if(strcmp(records[i].lastName, lastName) == 0 && records[i].gender == gender) {
        printf("%s %s %c %d %s\n", records[i].lastName, records[i].firstName, &records[i].gender, &records[i].covidInfo->isCovidPositive, records[i].covidInfo->testDate);
        search = true;
     }
  } 
  }
  if (seekOption == 5) {
    printf("Please input the gender of the patient(M/F): \n");
    scanf(" %c", &gender);
    printf("Please input the Covid result(1 = Yes, 0 = No): \n");
    scanf(" %d", &covidPos);
  for (i = 0; i < update; i++) {
     if (records[i].gender == gender && records[i].covidInfo->isCovidPositive == covidPos) {
        printf("%s %s %c %d %s\n", records[i].lastName, records[i].firstName, &records[i].gender, &records[i].covidInfo->isCovidPositive, records[i].covidInfo->testDate);
        search = true;
     }
  }
  }
  if (seekOption == 6) {
    printf("Please input the last name of the patient in lowercase letters: \n");
    scanf(" %s", lastName);
    printf("Please input the Covid result(1 = Yes, 0 = No): \n");
    scanf(" %d", &covidPos);
  for (i = 0; i < update; i++) {
     if(strcmp(records[i].lastName, lastName) == 0 && records[i].covidInfo->isCovidPositive == covidPos) {
        printf("%s %s %c %d %s\n", records[i].lastName, records[i].firstName, &records[i].gender, &records[i].covidInfo->isCovidPositive, records[i].covidInfo->testDate);
        search = true;
     }
  }
  }
  if (search == false) {
    printf("No info Found\n");
  }
}

//create new patient definition
void createPatient(patients* records) {
  int i = 0;
  char lastName[15], firstName[15], gender, date[15];
  bool addPatient = false;
  //prompt user for information about patient
  printf("Please input the patient's last name: \n");
  scanf(" %s", lastName);
  printf("Please input the patient's first name: \n");
  scanf(" %s", firstName);
  printf("Please input the patient's gender(M/F): \n");
  scanf(" %c", &gender);
  printf("Please input the date of the patient's test(MM/DD/YYYY): \n");
  scanf(" %s", date);
  //update records 
  for (i; i < update; i++) {
     if (strcmp(records[i].firstName, ".") == 0 && addPatient == true) {
        printf("%d\n", i);
        strcpy(records[i].lastName, lastName);
        strcpy(records[i].firstName, firstName);
        records[i].gender = gender;
        strcpy(records[i].covidInfo->testDate, date);
        if (i % 2 == 0) {
           records[i].covidInfo->isCovidPositive = 0;
        }
        else {
           records[i].covidInfo->isCovidPositive = 1;
        }
     addPatient = true;
     break;
     }
  } 
}

//delete replecated data definition
void delete(patients* records) {
  int i =0, j;
  
  for (i; i < update - 1; i++) {
     for(j = i + 1; j < update; j++) {
        if (strcmp(records[i].lastName, records[j].lastName) == 0 && strcmp(records[i].lastName, records[i].lastName) == 0) {
           if (strcmp(records[i].lastName, "unassigned") != 0) {
              strcpy(records[i].lastName, "unassigned");
              strcpy(records[i].firstName, ".");
              records[i].gender = 'M';
              strcpy(records[i].covidInfo->testDate, "1/1/2021");
              if (i % 2 == 0) {
                records[i].covidInfo->isCovidPositive = 0;
              } 
              else {
                records[i].covidInfo->isCovidPositive = 1;
              }
            }
            else {
              strcpy(records[i].lastName, "unassigned");
              strcpy(records[i].firstName, ".");
              records[i].gender = 'M';
              strcpy(records[i].covidInfo->testDate, "1/1/2021");
              if (i % 2 == 0) {
                records[i].covidInfo->isCovidPositive = 0;
              }
              else {
                records[i].covidInfo->isCovidPositive = 1;
              } 
            }
        }
      }
    }
}  