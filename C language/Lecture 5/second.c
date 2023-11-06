#include<stdio.h>
main(){
	int num;
	printf("Enter your choice who many tables : ");
	scanf("%d",&num);
	int arr[num],i,j;
	for(i=0;i<num;i++)
	{
		printf("Enter your tables here : ");
		scanf("%d",&arr[i]);;
	}
	printf("\nThis is your choice ");
	for(i=0;i<num;i++){
		printf("%d \t",arr[i]);
	}
	for(i=0;i<num;i++)
	{
		printf(" \nThis is your table of %d \n",arr[i]);
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d \n",arr[i],j,arr[i]*j);
		}
		printf("\n-------------------------------------\n");
	}
}
