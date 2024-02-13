#include<stdio.h>

int main(){
	int num1, num2, num3, max;
	printf ("Vui long nhap 3 so : ");
	scanf("%d %d %d",&num1, &num2, &num3);
	max=(num1>num2) ? ((num1>num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
	printf("So lon nhat la: %d",max);
	getchar();
	return 0;
	}
