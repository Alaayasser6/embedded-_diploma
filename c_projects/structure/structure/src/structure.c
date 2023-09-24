/*
 ============================================================================
 Name        : structure.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
   /////////////////////////////////////////student data/////////////////////////////////////
//
//struct Sstudent{
//	char name[50];
//	int roll;
//	float marks;
//
//} student;
//void read_information(char name[],int roll,float marks) {
//
//	printf("Displaying information \n");
//	printf("name:%s\n",name);
//	printf("roll:%d\n",roll);
//	printf("marks:%.2f\n",marks);

//}

////////////////////////////////////////////Add two complex number.////////////////////////////////
//struct Scomplex{
//	float I;
//	float R;
//};
//struct Scomplex read(char c[]){
//	struct Scomplex x;
//	printf("for %s complex number enter real and imaginary",c);
//	fflush(stdout); fflush(stdin);
//	scanf("%f %f",&x.R,&x.I);
//	return x;
//}
//void add(struct Scomplex A,struct Scomplex B ){
//	struct Scomplex c;
//	c.I=A.I+B.I;
//	c.R=A.R+B.R;
//	printf("the summation of x & y =%.2f+%.2f i",c.R,c.I);
//
//
//}

////////////////////////////////store information of student using structure///////////////////////

struct Sstructur{
	char name[40];
	float mark;

} structure[4];

int main(void) {
	//////////////////////////////////////student data//////////////////////////////////////
//	printf("Enter information of student :\n");
//	printf("Enter Name:");
//	fflush(stdout); fflush(stdin);
//	scanf("%s",student.name);
//	printf("Enter roll number:");
//	fflush(stdout); fflush(stdin);
//	scanf("%d",&student.roll);
//	printf("Enter marks:");
//	fflush(stdout); fflush(stdin);
//	scanf("%f",&student.marks);
//	read_information(student.name,student.roll,student.marks);

	////////////////////////////////////////////Add two complex number.////////////////////////////////
//	struct Scomplex x=read("x");
//	struct Scomplex y=read("y");
//     add(x,y);

	////////////////////////////////store information of student using structure///////////////////////
	for (int i=0;i<4;i++){
		printf("for roll number %d:",i+1);
		printf("Enter name:");
		fflush(stdout); fflush(stdin);
		scanf("%s",structure[i].name);
		printf("Enter mark:");
		fflush(stdout); fflush(stdin);
		scanf("%f",&structure[i].mark);
	}
	printf("Displaying information for student\n");
	for(int i=0;i<4;i++){
		printf("information of roll %d\n",i+1);
		printf("name:%s\n",structure[i].name);
		printf("mark:%.2f\n",structure[i].mark);

	}
}
