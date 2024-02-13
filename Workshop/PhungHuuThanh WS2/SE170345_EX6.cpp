#include<stdio.h>

int main(){
	int n, tong=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=0; i<=n ; i++){
		tong=tong+i;
	   }	
	printf("Sum of natural numbers 1-%d: %d", n, tong);
	return 0;
}
