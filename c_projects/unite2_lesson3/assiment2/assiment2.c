/*
 ============================================================================
 Name        : assiment2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//EX1 :
	int n;
	printf("ENTER AN INTEGER YOU WANT TO CHECK:..... ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	int d=n%2;
	switch(d){
	case 0:
		printf("%d is even number",n);
		break;
	default:
		printf("%d is Odd number",n);
	}

	printf("\n************************************************************");

//EX2:
	char c;
	printf("\nENTER AN ALPHABET:..");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);
	switch(c){
	case'a':
	case'A':
	case'e':
	case'E':
	case'i':
	case'I':
	case'o':
	case'O':
	case'u':
	case'U':
		printf("\n%c is a vowel.",c);
		break;
	default:
		printf("\n%c is a constant",c);
	}
	printf("\n************************************************************");
//EX3
	float x,y,z;
	printf("\nENTER THREE NUMBERS...\n");
	fflush(stdout); fflush(stdin);
	scanf("%f\n%f\n%f",&x,&y,&z);
	printf("Largest number=%f",(x>y)?(x>z)?x:z:(y>z)?y:z);
	printf("\n************************************************************");
//EX4:
	float h;
	printf("\nEnter the numbebr:..");
	fflush(stdout); fflush(stdin);
	scanf("%f",&h);
	if(h<0)
		printf("%f is negative",h);
	else if (h>0)
		printf("%f is positive",h);
	else
		printf("you entered  zero");
	printf("\n************************************************************");

//EX5:
	char v;
	printf("ENTER THE CHARACTER");
	scanf("%c",&v);
	if((v>='a'&& v<='z') || (v>='A' && v<='Z'))
		printf("%c  is an alphabet",v);
	else
		printf("%c is not alphabet",v);

//EX6:
	int nn;
	int sum=1;
	printf("\nEnter integer number");
	fflush(stdout); fflush(stdin);
	scanf("%d",&nn);
	for (int i=2;i<=nn;i++){
		sum=sum+i;
	}
	printf("sum=%d",sum);
	printf("\n************************************************************");

//EX7:

	int fac=1;
	int nnn;
	printf("\nEnter the number ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&nnn);
	if (nnn<0)
		printf("not valid ");
	else
	{  for(int j=1;j<=nnn;j++){
		fac=fac*j;

	}
	printf("\nfactorial=%d",fac);

	}
	printf("\n************************************************************");
//EX8:
	char m;
	int w,q;
	printf("/nEnter the operator (+ or - or * or /)");
	fflush(stdout); fflush(stdin);
	scanf("%c",&m);
	printf("/nEnter two numbers");
	fflush(stdout); fflush(stdin);
	scanf("%d \n %d",&w,&q);

	switch (m){
	case'+':
		printf("%d + %d = %d",w,q,(w+q));
		break;
	case'-':
		printf("%d - %d = %d",w,q,(w-q));
		break;
	case'*':
		printf("%d * %d = %d",w,q,(w*q));
		break;
	case'/':
		printf("%d / %d = %d",w,q,(w/q));
		break;

	}

}
