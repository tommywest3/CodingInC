//This program uses a function called CharacterScan to read a char from the user
//The function must take an int pointer as a parameter
//The program should print the char and ascii code for each character the user enters
//The program should only exit whe nthe user enters escape

#include <stdio.h>
#include <stdlib.h>
char CharacterScan(int*);

int main(void){
    int* iPtr;
    char exit;
    char aCode;//match variable names
    while(1){//while(1) instead of while(0)
        char c = CharacterScan(&iPtr);
        aCode = iPtr;//take away dereferencing char '*'
        if(aCode == 27){//ASCII for esc is 27 so ==
            printf("Exiting the code!\n");
            break;
        }
        else{
            printf("%c is ASCII code %d.\n", c, aCode);//delete '*'
        }
    }
}

char CharacterScan(int* iPtr){
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);//; instead of :
    int a = (char) c;//change c to char
    *iPtr = a;//no '&' needed
    return c;
}