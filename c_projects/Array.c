/*
 ============================================================================
 Name        : C_Array&String.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include<string.h>

int main(void) {
	float m1[2][2];
	float m2[2][2];
	float sum[2][2];
	printf("Enter the elements of matrix 1 \n ");
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("Enter the element of(%d,%d)\n",i,j);
			fflush(stdout);fflush(stdin);
			scanf("%f",& m1[i][j]);	}}

	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("%f\t",m1[i][j]);	}
		printf("\n");}

	printf("Enter the elements of matrix 2 \n  ");
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("Enter the element of(%d,%d)\n",i,j);
			fflush(stdout);fflush(stdin);
			scanf("%f",& m2[i][j]);}}

	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("%f\t",m2[i][j]);}
		printf("\n");}

	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			sum[i][j]=m1[i][j]+m2[i][j];}}
	printf("sum=\n");
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("%f\t",sum[i][j]);}
		printf("\n");}
	printf("\n**************************************************************\n");
//calculate average using array
	int s;
	float summ=0;
	printf("enter the number of data");
	fflush(stdout);fflush(stdin);
	scanf("%d",&s);
	float num[s];
	for  (int i=0;i<s;i++){
		printf("enter number: %d\n",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%f",&num[i]);
		summ+=num[i];
	}
	printf("the avarage of the numbers= %f",summ/s);
	printf("\n**************************************************************\n");

//find transpose of matrix
	int r;
	int c;

	printf("enter the size of matrix");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&r,&c);
	int arr[r][c];
	int tran[c][r];
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			printf("Enter the element of(%d,%d)\n",i,j);
			fflush(stdout);fflush(stdin);
			scanf("%d",& arr[i][j]);
		}
	}

	printf("Entered matrix is\n ");
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){

			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	for (int i=0;i<c;i++){
		for (int j=0;j<r;j++){
			tran[i][j]=arr[j][i];
		}

	}

	printf(" transpose matrix is\n ");
	for (int i=0;i<c;i++){
		for (int j=0;j<r;j++){
			printf("%d\t", tran[i][j]);
		}
		printf("\n");
	}
	printf("\n**************************************************************\n");

//search an element in array
	int k;
	int ran;
	printf("Enter the number of elements");
	fflush(stdout);fflush(stdin);
	scanf("%d",&k);
	int ser[k];

	printf("enter the elements: ");

	for (int i=0;i<k;i++){
		fflush(stdout);fflush(stdin);
		scanf("%d",&ser[i]);
		printf("\n");
	}

	printf("enter the element you want to search: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&ran);
	for (int i=0;i<k;i++){
		if (ran==ser[i])
			printf("is found in %d",i+1);
		else if (i==k)
			printf("not found");
	}
	printf("\n**************************************************************\n");
//insert an element in array
	int ele;
	int loc;

	int a_ele[30]={1,2,3,4,5};
	printf("\n enter the element to be inserted ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&ele);
	printf("enter the location");
	fflush(stdout);fflush(stdin);
	scanf("%d",&loc);
	for (int i=5;i>=loc;i--){
		a_ele[i]=a_ele[i-1];
	}

	a_ele[loc-1]=ele;
	for (int i=0;i<6;i++){
		printf("%d",a_ele[i]);
	}

}
