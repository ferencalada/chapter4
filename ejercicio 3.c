//program that finds the area and perimeter of 2 rectangles
#include <stdio.h>

float width, height;

float perimeter (float width,float height){
	float perimeter=2*width+2*height;
	printf("the perimeter measures %.2f inches\n",perimeter);
	return perimeter;
}
float area (float width,float height){
	float area=width*height;
	printf("the area measures %.2f square inches\n\n",area);
	return area;	
}

int main (void){
printf("Results if the measures are 3 in x 5 in:\n");
		width=3; height=5;
	perimeter(width,height);
	area(width,height);
printf("Results if the measures are 6.8 in x 2.3 in:\n");
		width=6.8; height=2.3;
	perimeter(width,height);
	area(width,height);
	
	return 0;
}

