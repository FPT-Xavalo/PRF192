#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    // Tinh tong cac uoc cua n
 for(i=1;i<=n/2;i++){
 	if(n%i==0){
 		sum +=i;
 		
	 }
 }
 
 if(sum == n){
 	printf("%d la so hoan hao",n);
 }else{
 	printf("%d la so khong hoan hao",n);
 }
    return 0;
}


