#include<stdio.h>
main(){
	int arr[10],i,even[10],odd[10],j=0,k=0,even_total,odd_total;
	for(i=0;i<10;i++)
	{
	printf("Enter the values :");
	scanf("%d",&arr[i]);
	if(arr[i]%2==0){
		even[j]=arr[i];
		even_total+=arr[i];
		j++;
	}else{
		odd[k]=arr[i];
		odd_total+=arr[i];
		k++;
	}
	}
	printf("\nThis is your org array :");
	for(i=0;i<10;i++)
	{
		printf("%d \t",arr[i]);
	}
	printf("\nThis is your even array");
	for(i=0;i<j;i++)
	{
		printf("%d\t",even[i]);
	}
	printf("\nThis is your odd array");
	for(i=0;i<k;i++)
	{
		printf("%d\t",odd[i]);
	}
	printf("\nThis is your even total %d",even_total);
	printf("\nThis is your odd total %d",odd_total);
}
