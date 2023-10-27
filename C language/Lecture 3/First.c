/*
switch(exp){
case 1:
statment;
break;
deafult:
statment;
break;
}
*/
#include<stdio.h>
main(){
	int days;
	printf("Enter your day here : ");
	scanf("%d",&days);
	switch(days){
		case 1:
		printf("Monday");
		break;
		case 2:
		printf("Tuesday");
		break;
		case 3:
		printf("Wednesday");
		break;
		case 4:
		printf("Thiursday");
		break;
		case 5:
		printf("Friday");
		break;
		case 6:
		printf("Saturday");
		break;
		case 7:
		printf("Sunday");
		break;
		default:
			printf("Invalid Input");
			break;
	}
}
