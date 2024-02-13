#include<stdio.h>
int main(){
    int n;
    int dem=0 ;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(n == 0){
        dem=1;
    }   
    while(n!= 0){
        n =n/10;
        dem++;
    }
    printf("So chu so cua so duoc nhap la %d", dem);
    return 0;
}
