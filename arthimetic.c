/*
Student Name : Kabir D Shrestha 
Subject : bProgramming Fundamental
Lab No. : 05
Program : Write a program to add to numbers
Date :2016-10-18
*/
#include<stdio.h>
	int main(){
		int a,b,v;
		printf("Enter the first number:");
		scanf("%d",&a);
		
		printf("Enter the second number:");
		scanf("%d",&b);
		
		
		printf("\nUse of '+' operator:\n");
		printf("%d+%d=%d",a,b,a+b);
		
		
		printf("\nUse of '-' operator:\n");
		printf("%d-%d=%d",a,b,a-b);
		
		
		printf("\nUse of '*' operator:\n");
		printf("%d*%d=%d",a,b,a*b);
		
		
		printf("\nUse of '/' operator:\n");
		printf("%d/%d=%d",a,b,a/b);
		
		printf("\nUse of '%%' operator:");
		printf("%d %% %d=%d",a,b,a%b);
		
		printf("\nEnter the v integer value:\n");
		scanf("%d",&v);
		printf("\nOriginal value of v is %d \n",v);
		printf("The post-fix increment (v++) is:%d",v++);
		printf("\nThe Pre-fix increment(++v) is :%d\n",++v);
		
		
        printf("\nOriginal value of v is: %d \n",v);
		printf("The Post-fix decrement (v--) is:%d",v--);
		printf("\nThe Pre-fix decrement (--v) is :%d\n",--v);
		
		
		
		return 0;
	}
