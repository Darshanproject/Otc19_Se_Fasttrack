#include<stdio.h>
main(){
	int i,a;
	printf("Write num: ");
	scanf("%d", &a);
	for(i=a;i>0;i--){
		printf("%d \n",a);
		a-=1;
	}
}
