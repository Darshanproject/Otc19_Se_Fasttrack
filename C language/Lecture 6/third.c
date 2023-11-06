#include<stdio.h>
main(){
	int num,num1;
	printf("Enter your values  :");
	scanf("%d%d",&num,&num1);
	sum(num,num1);
}

void sum(int num,int num1){
	
	printf("This is your addtion of two numbers : %d",num+num1);
}
