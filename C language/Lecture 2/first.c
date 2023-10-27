//(condtion)?epx1:epx2;
//relation > < >=<= == 
//logical && || =!
#include<stdio.h>
main(){
	int num;
	printf("enter your num here : ");
	scanf("%d",&num);
	(num%2==0)?printf("Even number"):
	printf("odd number");
	//(num > 18 && num > 0)?printf("That your are aligable ."):printf("That your are not aligable");	
	//(num > 18 || num < 0)?printf("That your are aligable ."):printf("That your are not aligable");	
}
