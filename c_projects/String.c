/*
 ============================================================================
 Name        : String_assiment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main(void) {
char text[100];
char c;
printf("Enter the string");
fflush(stdout);fflush(stdin);
gets(text);
printf("Enter the character");
fflush(stdout);fflush(stdin);
scanf("%c",&c);
int i=0;
int count=0;
while(text[i]!='\0'){
	if (text[i]==c)
		count++;
	i++;
}
printf("frequency of %c is %d",c,count);
printf("\n************************************************************");

//find length of string without strlen()
char text1[100];
printf("\nEnter the string");
fflush(stdout);fflush(stdin);
gets(text1);
int j=0;
int count1=0;
while(text1[j]!='\0'){
	count1++;
	j++;
}
printf("length of string =%d",count1);
printf("\n************************************************************");

//reverse string using strlen()function only
char text2[100];
printf("\nEnter the string");
fflush(stdout);fflush(stdin);
gets(text2);
char reverse[strlen(text2)];
int s=strlen(text2)-1;
for (int f=0;f<strlen(text2);f++)
  {
	reverse[f]=text2[s];
	s--;

	}
printf("%s",reverse);
}
