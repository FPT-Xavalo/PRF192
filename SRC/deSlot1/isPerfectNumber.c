#include <stdio.h>
#include <stdlib.h>
int isPerfectNumber(int n);
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main() {
system("cls");
printf("\nTEST Q1 (2 marks):\n");
int n;
int check;
do {
printf("Enter n = ");
scanf("%d",&n);
} while(n<=0);
check = isPerfectNumber(n);
printf("\nOUTPUT:\n");
printf("%d",check);
printf("\n");
system ("pause");
return(0);
//============================================================
}
//-----------------------------------------------------
int isPerfectNumber(int n) {
int check;
//Begin your codes here=====================
int i,sum=0;
// 0 : false
// 1 : true
for(i=1;i<n;i++){
if(n%i==0){
sum=sum+i;
}
}
if(sum==n){
check = 1;
}else check = 0;
//End your codes============================
return check;
}
