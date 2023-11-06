#include<stdio.h>
#include<string.h>
main(){
	char name[20];
	int num;
	printf("Enter your string here : ");
	scanf("%s",&name);
//	gets(name);
	printf("%d \n",strlen(name));
	fflush(stdin);
	printf("Enter your string here : ");
	scanf("%d",&num);
	printf("%d",num);
}
