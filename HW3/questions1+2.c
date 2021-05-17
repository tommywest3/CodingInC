//Thomas West 2/11/2021 

#include<stdio.h>

int main(void){
//Question 1

//a) Print unsigned integer 1001 left justified in a 12-digit field with 6 digits.
printf("%-12u\n", 100100);//Left aligned in 12 digit field with 6 digits

//b) Print 7.350 in a 8-digit field with preceding zeros.
printf("%08.3lf\n", 7.350);//8 digits including decimal point

//c) Print 300 with and without a sign.
printf("%d %u \n", 300, 300);//300 with and without a sign on the same line

//d) Print -300 as unsigned number.
printf("%u\n", -300);//-300 as an unsigned number

//e) Read a hexadecimal value into variable hex.
int hex;//initialize hex
scanf(" %x", &hex);//Read the hexadecimal value into varibale hex
printf("%#x\n", hex);//print what was read

//f) Read an octal value into variable octal.
int octal;//initialize octal
scanf(" %o", &octal);//Read the octal value into variable octal
printf("%#o\n", octal);//print what was read

//g) Print 100 in hexadecimal form preceded by 0x.
printf("%#x\n", 100);//100 in hexadecimal with 0x in front

//h) Print 100 in octal form preceded by 0.
printf("%#o\n", 100);//100 in octal with 0 in front

//i) Read characters into array m until the letter z is encountered.
char m[100];//initialize array m
printf("Begin input of characters into an array: \n");//prompt the user
scanf(" %[^z]\n", &m);//read until "z" is entered
printf("The array is \n%s \n", m);//print what was input

/*j) Read a time of the form hh-mm-ss, storing the parts of the time in the integer variables hour,minute and second. Skip the dash (-) in the input stream. Use the assignment suppression character.*/

int hour = 0;//initialize variables
int min = 0;
int sec = 0;
printf("Enter a time in the format hh-mm-ss: ");//prompt the user
getchar();//buffer
scanf("%d%*c%d%*c%d", &hour, &min, &sec);//format the scanf 
printf("\nhour = %d min = %d sec = %d\n", hour, min, sec);//output the data

/*k) Read a time of the form hh:mm:ss, storing the parts of the time in the integer variables hour, minute and second. Skip the colons (:) in the input stream. Do not use the assignment suppression character. */

printf("Enter a time in the format hh:mm:ss: ");//prompt the user
scanf("%d:%d:%d", &hour, &min, &sec);//format the scanf
printf("\nhour = %d min = %d sec = %d\n", hour, min, sec);//output the data 
 
/*l) Read a string of the form "characters" from the standard input. Store the string in character array s. Eliminate the quotation marks from the input stream.*/

char s[20];//initialize the array
printf("Enter the string \"characters\" including the double quotes:\n");//prompt the user
scanf("\"%[^\"]\"", s);//read the array


//Question 2
//a) 
printf( "%-10d\n", 32100 );
//32100 Guessed Correct

//b) 
printf( "%c\n", "This is a string" );
//Guessed Correct

//c) 
printf( "%*.*lf\n", 8, 3, 7124.921654 );
//7124.921 //I was off by one 7124.922

//d) 
printf( "%#o\n%#X\n%#e\n", 17, 17, 1008.83619 );
//O20 Guessed Correct
//OX11 Guessed Correct
//1.00883619ex03 Wrong Guess correct answer: 1.008836e+03
 
//e) 
printf( "% ld\n%+ld\n", 1000000, 8000000 );
// 1000000 Guessed Correct
//+8000000 Guessed Correct

//f) 
printf( "%10.3E\n", 854.93738 );
// 8.549E+02 Guessed Correct

//g) 
printf( "%10.3g\n", 264.93738 );
// 2.649e+02 Wrong Guess correct answer:       265

//h) 
printf( "%d\n", 10.937 );
//Large number Wrong Guess correct answer: 2147483637

}//main close brace