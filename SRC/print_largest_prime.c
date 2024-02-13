#include <stdio.h>
#include <math.h>
int soNguyenTo(int n)
{
    if (n < 2)    
        return 0;
int i;
    for ( i = 2; i <= sqrt((float)n); i ++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int largest_prime(int a[], int n){
	int largest=-1;
	int count=0;
	int i;
	for(i=0;i<n;i++){
		if(soNguyenTo(a[i])) {
			count++;
			if(a[i]>largest)
			
			largest=a[i];
		}
	}
	if (count == 0) //Khong co so nguyen to trong mang return -1 (de yeu cau)
	{
        return -1;
    } else {
        return largest;
    }
}
int main(){
	int n,i;
	
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ketqua = largest_prime(a,n);
	if( ketqua == -1 ){
	
	printf("There is no prime number in the array.\n");
	}else{
			printf("%d There is prime number in the array.",ketqua);
			
	}
}
	

