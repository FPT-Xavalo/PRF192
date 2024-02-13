#include<stdio.h>
int swap(int *x, int *y){
	int t= *x;
	*x=*y;
	*y=t;
	return 0;
}
int main(){
	int num1, num2;
	printf("Input num1: ");
	scanf("%d",&num1);
	printf("Input num2: ");
	scanf("%d",&num2);
	swap(&num1, &num2);
	printf("Values after swapping:\n Num1 = %d\n Num2 = %d", num1, num2);
	getchar();
	return 0;
}
