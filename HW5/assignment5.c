//Thomas West 04/23/2021 Makeup Assignment 5
#include <stdio.h>
#include <stdlib.h>


int main(void) {

  char display[20][7];
  int seatChart[20][7];
  char class;
  int row[2];
  char seatLetter;
  int i = 0, j = 0;
  char choice;
  char fName[30];
  char lName[30];

for(i; i < 20; i++) {
  for(j; j < 7; j++) {
    display[i][j] = '-';
    //seatChart[i][j] = 0;
  }
}

while (choice != 'Q') {  
  printf("Row seats 1-3 are First-Class (F)\n");
  printf("Row seats 4-7 are Business-Class (B)\n");
  printf("Row seats 8-20 are Economy-Class with Row 8 being priority (E)\n");
  printf("\n");
 
  printf("Seat Unassigned ('-')\n");
  printf("Seat Unavailable ('X')\n");
  printf("\n");

  printf(" \t1 2 3\t4 5 6 7\t8  9 10 11 12 13 14 15 16 17 18 19 20\n");

  printf("Seat A\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][0], display[1][0],display[2][0],display[3][0],display[4][0],display[5][0],display[6][0],display[7][0],display[8][0],display[9][0],display[10][0],display[11][0],display[12][0],display[13][0],display[14][0],display[15][0],display[16][0],display[17][0],display[18][0],display[19][0]);
  printf("Seat B\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][1],display[1][1],display[2][1],display[3][1],display[4][1],display[5][1],display[6][1],display[7][1],display[8][1],display[9][1],display[10][1],display[11][1],display[12][1],display[13][1],display[14][1],display[15][1],display[16][1],display[17][1],display[18][1],display[19][1]);

  printf("\n");
  printf("Seat D\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][2],display[1][2],display[2][2],display[3][2],display[4][2],display[5][2],display[6][2],display[7][2],display[8][2],display[9][2],display[10][2],display[11][2],display[12][2],display[13][2],display[14][2],display[15][2],display[16][2],display[17][2],display[18][2],display[19][2]);
  printf("Seat E\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][3],display[1][3],display[2][3],display[3][3],display[4][3],display[5][3],display[6][3],display[7][3],display[8][3],display[9][3],display[10][3],display[11][3],display[12][3],display[13][3],display[14][3],display[15][3],display[16][3],display[17][3],display[18][3],display[19][3]);
  printf("Seat F\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][4],display[1][4],display[2][4],display[3][4],display[4][4],display[5][4],display[6][4],display[7][4],display[8][4],display[9][4],display[10][4],display[11][4],display[12][4],display[13][4],display[14][4],display[15][4],display[16][4],display[17][4],display[18][4],display[19][4]);

  printf("\n");
  printf("Seat H\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][5],display[1][5],display[2][5],display[3][5],display[4][5],display[5][5],display[6][5],display[7][5],display[8][5],display[9][5],display[10][5],display[11][5],display[12][5],display[13][5],display[14][5],display[15][5],display[16][5],display[17][5],display[18][5],display[19][5]);
  printf("Seat I\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][6],display[1][6],display[2][6],display[3][6],display[4][6],display[5][6],display[6][6],display[7][6],display[8][6],display[9][6],display[10][6],display[11][6],display[12][6],display[13][6],display[14][6],display[15][6],display[16][6],display[17][6],display[18][6],display[19][6]);

 

  //Get user information for ticket
  printf("Please enter your First Name: ");
  scanf(" %s", &fName);
  
  printf("Please enter your Last Name: ");
  scanf(" %s", &lName);
  
  printf("Please enter which class you would like in capital letters (F = First Class, B = Business Class, and E = Economy): ");
  scanf(" %c", &class);
                                        
  printf("Please choose which row you would like (1-20): ");
  scanf(" %d", &row[0]);
                                                      
  printf("Please choose a seat in capital letters (A, B, D, E, F, H and I): ");
  scanf(" %c", &seatLetter);

  //Change data for row values 
  if (seatLetter == 'A') {
    row[0] -= 1;
    row[1] = 1;
    row[1] -= 1;
  }
  else if (seatLetter == 'B') { 
    row[0] -= 1;
    row[1] = 2;
    row[1] -= 1;
  }
  else if (seatLetter == 'D') {
    row[0] -= 1;
    row[1] = 3;
    row[1] -= 1;
  }
  else if (seatLetter == 'E') {  
    row[0] -= 1;
    row[1] = 4;
    row[1] -= 1;
  } 
  else if (seatLetter =='F') {
    row[0] -= 1;
    row[1] = 5;
    row[1] -= 1;
  }
  else if (seatLetter == 'H') {  
    row[0] -= 1;
    row[1] = 6;
    row[1] -= 1;
  }
  else if (seatLetter == 'I') {
    row[0] = row[0] - 1;
    row[1] = 7;
    row[1] = row[1] - 1;
  } 

  //Fill in spots with unavailability icon and check for user errors
  if(class == 'F') {
     if(row[0]+1 == 1 || row[0]+1 == 2 || row[0]+1 == 3){
       if(seatChart[row[0]][row[1]] == 0){
         seatChart[row[0]][row[1]] = 1;
	 display[row[0]][row[1]] = 'X';
       }
     else if(seatChart[row[0]][row[1]] == 1){
       printf("\nSeat %d%c has already been selected!\n", row[0] + 1, seatLetter);
     } 
     }
     else{
	 printf("\nThe seat you selected is not in this class!\n");
     }
  }
  else if(class == 'B'){
     if(row[0]+1 == 4 || row[0]+1 == 5 || row[0]+1 == 6 || row[0]+1 == 7){
       if(seatChart[row[0]][row[1]] == 0){
         seatChart[row[0]][row[1]] = 1;
	 display[row[0]][row[1]] = 'X';
       }
       else if(seatChart[row[0]][row[1]] == 1){
	 printf("\nSeat %d%c has already been selected!\n", row[0] + 1, seatLetter);
       }
       }
       else{
	 printf("\nThe seat you selected is not in this class!\n");
       }
  }
  else if(class == 'E'){
     if(row[0]+1 == 8 || row[0]+1 == 9 || row[0]+1 == 10 || row[0]+1 == 11 || row[0]+1 == 12 || row[0]+1 == 13 || row[0]+1 == 14 || row[0]+1 == 15 || row[0]+1 == 16 || row[0]+1 == 17 || row[0]+1 == 18 || row[0]+1 == 19 || row[0]+1 == 20){
       if(seatChart[row[0]][row[1]] == 0){
	 seatChart[row[0]][row[1]] = 1;
	 display[row[0]][row[1]] = 'X';
       }
       else if(seatChart[row[0]][row[1]] == 1){
	 printf("\nSeat %d%c has already been selected!\n", row[0] + 1, seatLetter);
       }
       }
       else{
	 printf("\nThe seat you selected is not in this class!\n");  
     }
  }

  printf("\nThis is your ticket:\n");
  printf("Name: %s %s\n", fName, lName);
  printf("Class: %c\n", class);
  printf("Row: %d\n", row[0]+1);
  printf("Seat: %c\n", seatLetter);

  row[0] = 0;
  row[1] = 0;

  printf("\nWould you like to book another seat on this flight or quit (Q)?");
  scanf(" %c", &choice);


  printf("\nPassenger added:%s %s\n", fName, lName);

}

  //End of prgram display all seats
  printf("\nFull manifest is displayed here:\n");
  printf("Seat Unassigned ('-')\n");
  printf("Seat Unavailable ('X')\n");
  printf("\n");

  printf(" \t1 2 3\t4 5 6 7\t8  9 10 11 12 13 14 15 16 17 18 19 20\n");

  printf("Seat A\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][0], display[1][0],display[2][0],display[3][0],display[4][0],display[5][0],display[6][0],display[7][0],display[8][0],display[9][0],display[10][0],display[11][0],display[12][0],display[13][0],display[14][0],display[15][0],display[16][0],display[17][0],display[18][0],display[19][0]);
  printf("Seat B\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][1],display[1][1],display[2][1],display[3][1],display[4][1],display[5][1],display[6][1],display[7][1],display[8][1],display[9][1],display[10][1],display[11][1],display[12][1],display[13][1],display[14][1],display[15][1],display[16][1],display[17][1],display[18][1],display[19][1]);

  printf("\n");
  printf("Seat D\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][2],display[1][2],display[2][2],display[3][2],display[4][2],display[5][2],display[6][2],display[7][2],display[8][2],display[9][2],display[10][2],display[11][2],display[12][2],display[13][2],display[14][2],display[15][2],display[16][2],display[17][2],display[18][2],display[19][2]);
  printf("Seat E\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][3],display[1][3],display[2][3],display[3][3],display[4][3],display[5][3],display[6][3],display[7][3],display[8][3],display[9][3],display[10][3],display[11][3],display[12][3],display[13][3],display[14][3],display[15][3],display[16][3],display[17][3],display[18][3],display[19][3]);
  printf("Seat F\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][4],display[1][4],display[2][4],display[3][4],display[4][4],display[5][4],display[6][4],display[7][4],display[8][4],display[9][4],display[10][4],display[11][4],display[12][4],display[13][4],display[14][4],display[15][4],display[16][4],display[17][4],display[18][4],display[19][4]);

  printf("\n");
  printf("Seat H\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][5],display[1][5],display[2][5],display[3][5],display[4][5],display[5][5],display[6][5],display[7][5],display[8][5],display[9][5],display[10][5],display[11][5],display[12][5],display[13][5],display[14][5],display[15][5],display[16][5],display[17][5],display[18][5],display[19][5]);
  printf("Seat I\t%c %c %c    %c %c %c %c    %c  %c %c %c %c %c %c %c %c %c %c %c %c\n", display[0][6],display[1][6],display[2][6],display[3][6],display[4][6],display[5][6],display[6][6],display[7][6],display[8][6],display[9][6],display[10][6],display[11][6],display[12][6],display[13][6],display[14][6],display[15][6],display[16][6],display[17][6],display[18][6],display[19][6]);

return 0;
}