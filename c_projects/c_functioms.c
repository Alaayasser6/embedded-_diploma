/*
 ============================================================================
 Name        : c_functioms.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//prime numbers
void prime(int n1,int n2){
	int x=0;
	for(int i=(n1+1);i<n2;i++){
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				x=1;
				break;
			}
		}
		if (x==0){
			printf("%d",i);
			printf(" ");
		}
		else
			x=0;
	}
}
//power of number
int power (int num,int count){
	if(count==0)
		return 1;
	else
		return num*power(num,count-1);
}
//factorial
int fac(int num){
	if (num==0)
		return 1;
	else
		return num*fac(num-1);

}
//reverse the sentence
void reverse(){
	char c;
	scanf("%c",&c);
	if(c!='\n'){
		reverse();
		printf("%c",c);
	}
}

int main(void) {
//prime numbers
	int n1,n2;
	printf("Enter two numbers(intervals");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&n1,&n2);
	prime(n1,n2);
printf("\n********************************************************");
//power of number
	int c,n;
	printf("Enter the base");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	printf("Enter the power");
	fflush(stdout);fflush(stdin);
	scanf("%d",&c);
	printf("%d^%d=%d",n,c,power(n,c));
printf("\n********************************************************");
//factorial
	int n3;
	printf("Enter the number");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n3);
	fac(n3);
	printf("the factorial of %d=%d",n3,fac(n3));
printf("\n********************************************************");
//reverse the sentence
	printf("enter the sentence");
	fflush(stdout);fflush(stdin);
	reverse();


}
