#include<stdio.h>

int main(){
    int num;
    printf("Vui long nhap 1 so bat ki:");
    scanf("%d",&num);
    if (num<0){
    	printf("%d la mot so nguyen am",num);
    }
    	else if (num>0) {
    		printf("%d la mot so nguyen duong",num);
    	}
    		else {
    			printf("Bang 0");
			}
	return 0;
}
