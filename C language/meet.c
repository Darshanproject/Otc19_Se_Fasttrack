#include<stdio.h>
main(){
	int i,arr[10];
	for(i=0;i<10;i++){
		printf("Enter your numbers here : ");
		scanf("%d",&arr[i]);
	}printf("\nThis is your array : ");
		for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
		
	}
}
