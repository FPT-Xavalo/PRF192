#include <stdio.h>
int nghichdaoso(int n){
 	int res = 0;
	 int  tmp; 
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
 return res;
 }
int main(){
    int n, tmp;
    scanf("%d", &n);
    nghichdaoso(n);
    printf("%d",nghichdaoso(n));
}
