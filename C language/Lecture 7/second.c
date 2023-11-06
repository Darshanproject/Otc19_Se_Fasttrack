#include<stdio.h>
#include<string.h>
main(){
	char name[20],name1[20];
	printf("Enter your lower name here : ");
//	scanf("%s",&name);
gets(name);
	printf("Enter your upper name here : ");
//	scanf("%s",&name1);
	gets(name1);
//	strcpy(name1,name);
//	printf("This is copied string : %s",name1);
//	printf("This si your revers string : %s",strrev(name));
//	if(strcmp(name,name1)==0)
//	{
//		printf("Your string is same");
//	}else{
//	printf("Your string is not equal");
//	}
//	printf("%s",strcat(name,name1));
	printf("This is your upper case string : %s\n",strupr(name));
	printf("This is your lower case string : %s\n",strlwr(name1));
}
