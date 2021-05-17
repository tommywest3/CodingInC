//Thomas West 02/15/2021
//Quiz 3 Question 5

#include<stdio.h>

int main(void) {
//Assign variables based on number system 
int i;
int q3Anum = 100;//decimal
int q3Bnum = 0x12A;//hex
int q3bbinary[9] = {1, 0, 0, 1, 0, 1, 0, 1, 0};//binary for Q3B
int q3Cnum = 0701;//octal
int q3cbinary[9] = {1, 1, 1, 0, 0, 0, 0, 0, 1};//binary for Q3C
int q4binAdd[8] = {1, 0, 0, 1, 1, 0, 1, 1};//binary addition
int q4binSub[7] = {1, 1, 0, 0, 0, 1, 1};//binary subtraction
int q4binMult[12] = {1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0};//binary multiplication
int q4octA = 01754;//octal
int q4octB = 010001;//octal
int q4hexA = 0x100A1;//hex
int q4hexB = 0xB1100;//hex
int q3bin[25]; //array to print binary

//Question 3A binary conversion loop
for (i=0;q3Anum > 0;++i) { 
	q3bin[i] = q3Anum % 2;
	q3Anum/=2; 
}
for (i-=1; i >= 0; --i) {
	printf("%d",q3bin[i]); 
}
printf("\n");
q3Anum = 100;
//Question3A hex conversion
printf("0x%x\n", q3Anum);

//Question3A octal conversion
printf("o%o\n", q3Anum);

//Question3B binary conversion
for (i=0; i < 9;i++) {
	printf("%d", q3bbinary[i]);
}
printf("\n");

//Question3B decimal conversion
printf("%d\n", q3Bnum); 

//Question3B octal conversion
printf("o%o\n", q3Bnum);

//Question3C binary conversion
for (i=0; i < 9;i++) {
        printf("%d", q3cbinary[i]);
}
printf("\n");

//Question3C decimal conversion
printf("%d\n", q3Cnum);

//Question3C hex conversion
printf("0x%x\n", q3Cnum);

//Question4A Addition, Subtraction and Multiplication
for (i=0; i < 8;i++) {
        printf("%d", q4binAdd[i]);
}
printf("\n");
for (i=0; i < 7;i++) {
        printf("%d", q4binSub[i]);
}
printf("\n");
for (i=0; i < 12;i++) {
        printf("%d", q4binMult[i]);
}
printf("\n");

//Question4B Addition, Subtraction and Multiplication
printf("o%o\n", q4octA + q4octB);
printf("o%o\n", q4octB - q4octA);
printf("o%o\n", q4octA * q4octB);

//Question4C Addition, Subtraction and Multiplication
printf("0x%x\n", q4hexA + q4hexB);
printf("0x%x\n", q4hexB - q4hexA);
printf("0x%x\n", q4hexA * q4hexB);
 
}//main closing brace