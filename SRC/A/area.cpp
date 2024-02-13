#include<stdio.h>
#define pi 3.14159
int main(){
	int n,dt;
	printf("Enter radius:");
	scanf("%d",&n);
	if (n<0){
		printf("-1");
	}
	else{
		dt= n*n*pi;
		printf("area:%d", dt);
	}
	
}
