#include<stdio.h>

int main(){
	int n, i;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Odd numbers between 1 to %d: ",n);
	if(n>=1){
	for(i=1;i<=n;i++){
		if(i % 2 != 0 )
		printf ("%d ",i);
	}
	}
	if(n<1){
	for(int i=1;i>=n;i--){
		if(i % 2 != 0 )
		printf ("%d ",i);
	}
	}
	return 0;
}
