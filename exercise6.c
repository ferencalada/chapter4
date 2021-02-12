//suma usando varias variables y una macro

#include<stdio.h> //biblioteca

#define PI 3.1416 //macro

int y = 5; //variable global

int main(void){
	int x = 10; //variable local
	
	float suma = 0;
	 suma = PI + x; 
	 
	printf("la suma es: %.2f",suma); //% introduce el tipo de dato
	return 0;
}
