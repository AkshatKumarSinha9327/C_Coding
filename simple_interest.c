#include<stdio.h>

main(){
	float p,r,t,si;
	printf("\nEnter p,r,t");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("\n p=%f\nr=%f\nt=%f\nsi=%f",p,r,t,si);
}
