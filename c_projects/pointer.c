/*
 ============================================================================
 Name        : pointer.c
 Author      :Alaa Yasser

 ============================================================================
 */

//1)Write a program in C to demonstrate how to handle the pointers in the program.
//2)Write a program in C to print all the alphabets using a pointer
//3)Write a program in C to print the elements of an array in reverse order. Test Data :
//4)Write a program in C to show a pointer to an array which contents are pointer to structure

#include <stdio.h>
#include <stdlib.h>

int main(void) {
////Write a program in C to demonstrate how to handle the pointers in the program.

//	int m;
//	int *ab;
//	m=29;
//	printf("Address of m :%p \n",&m);
//	printf("Value of m :%d\n",m);
//	ab=&m;
//	printf("Now ab is assigned with the address of m.\n");
//	printf("Address of pointer ab :%p\n",ab);
//	printf("Content of pointer ab :%d\n",*ab);
//
//	m=34;
//	printf("The value of m assigned to 34 now.\n");
//	printf("Address of pointer ab :%p\n",ab);
//	printf("Content of pointer ab :%d\n",*ab);
//
//	*ab=7;
//	printf("The pointer variable ab is assigned with the value 7 now.\n");
//	printf("Address of m :%p\n",&m);
//	printf("Value of m :%d\n",m);
//
//	printf("**************************************************************************");

////Write a program in C to print all the alphabets using a pointer

//	char alph[27];
//	char *p;
//	p=alph;
//	for(int i=0;i<26;i++){
//		*p=(i+'A');
//		 p++;
//	}
//	p=alph;
//	printf("The Alphabets are :\n");
//	for (int i=0;i<26;i++){
//		printf("%c\n ",*p);
//		p++;
//	}
//
//	printf("***************************************************************************");

////Write a program in C to print the elements of an array in reverse order. Test Data :

//	int arr[15]={2,3,4,5,6};
//	int *pi;
//	pi=arr;
//	printf("5 number of elements in the array \n");
//	for (int i=0;i<5;i++){
//		printf("element %d :%d\n",(i+1),*pi);
//		pi++;
//	}
//	printf("\n  \n");
//
//
//	pi=&arr[4];
//	printf("The elements of array in reverse order are : \n");
//	for (int i=5;i>0;i--){
//		printf("element %d :%d\n",(i),*pi);
//		pi--;
//	}
//	printf("***************************************************************************");

////Write a program in C to show a pointer to an array which contents are pointer to structure
//
//	typedef struct Employee{
//		char *name;
//		int ID;
//	}emp;
//
//	emp emp1={"Alex",1002} ,emp2={"Alaa",1004} ;
//	emp* arr[2]={&emp1,&emp2};
//
//	     emp *((*pt)[2])=&arr;
//
//         printf("%s",(*(*pt))->name);
//	     printf("%d",(*(*pt))->ID);  //*(pt+i)===pt[1]
}
