#include<stdio.h>
#include<math.h>
int so_chinh_phuong(int x){
   if(x<0){
   	return 0;
   }else if(x==0 || x==1 ){
   	return 1;
   
   }else {
   	int root= sqrt(x);
   	return root*root== x;
   }	
}
int main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if (so_chinh_phuong(num)){
		printf("Day la so chinh phuong",num);
		
	}else{
		printf("Day khong phai la so chinh phuong.\n",num);
	}
	 getchar();
	 return 0;
}
