/*
 ============================================================================
 Name        : first2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main (){

//EX1
	printf("c programming ");
	printf("\n************************************************************");

//EX2
	int n;
	printf("\nEnter an integer:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("\nYou entered:%d",n);
	printf("\n************************************************************");

//EX3
	int n1,n2;
	printf("\nEnter two integers:");
	fflush(stdout); fflush(stdin);
	scanf("%d \n %d",&n1,&n2);
	printf("\nsum =%d",(n1+n2));
	printf("\n************************************************************");
//EX4
	float x1,x2;
	printf("\nEnter two numbers:");
	fflush(stdout); fflush(stdin);
	scanf("%f \n %f",&x1,&x2);
	printf("\nproduct =%f",(x1*x2));
	printf("\n************************************************************");
//EX5
	char c;

	printf("\nEnter a character:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);
	printf("\nASCII value of %c =%d",c,c);
	printf("\n************************************************************");
//Ex6
	float a,b,d,f;
	printf("\nEnter value of a:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);
	printf("\nEnter value of b:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&b);
	f=b;
	d=a;
	b=d;
	a=f;
	printf("After swapping, value of a=%f \n",a);
	printf("After swapping, value of b=%f",b);
	printf("\n************************************************************");
//EX7
	float g,h;
	printf("\nEnter value of g:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&g);
	printf("\nEnter value of h:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&h);

	printf("After swapping, value of g=%f \n",h);
	printf("After swapping, value of h=%f",g);
	printf("\n************************************************************");



}
