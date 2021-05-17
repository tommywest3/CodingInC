//This program includes a struct called car that is used to store information about a given cat
//The program should ask the user for information about their car and initialize a car structure with the given information
//The program should also print the information using a pointer to the initialized struct
//The information printed using the struct and the pointer should be the same

#include <stdio.h>
#include <string.h>
// make name a string

struct car{
	char* car;
	int modelYear;
	float speed;
};

int main(void){
	char n[20];
	int a;
	float w;

	struct car c;
        struct car *cPtr;//initialize pointer
        cPtr = &c;//assign value to pointer


	printf("What is your favorite car's name: ");
	scanf(" %s",n);//should be %s not %d
	c.car = n;

	printf("When was it launched : " );
	scanf(" %d", &a);//should be %d not %c
	c.modelYear = a;//should be = to a, not cPtr

	printf("How much speed does it give : ");
	scanf(" %f", &w);//w is a float and needs &
	c.speed = w;//should be c.speed, not just speed
        

	printf("Car's name is %s, and should be the same as %s.\n", c.car, (*(cPtr)).car);
        //should be c.car, not &x.car. Use (*(cPtr)).car notation
	printf("Car's model year is %d, and should be the same as %d.\n", c.modelYear, (*(cPtr)).modelYear);
        //should be c.modelYear, not *modelYear. Use (*(cPtr)).modelYear notation
	printf("Car's speed is %f, and should be the same as %f.\n", c.speed , (*(cPtr)).speed);
	//Use (*(cPtr)).speed notation
}