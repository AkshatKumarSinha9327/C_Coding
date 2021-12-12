#include<stdio.h>

main(){
	float r,c,area;
	printf("\nEnter the radius of circle:");
	scanf("\n%f",&r);
	area = 3.14*r*r;
	c = 2*3.14*r;
	printf("area=%f \nCircumference=%f",area,c);
}
