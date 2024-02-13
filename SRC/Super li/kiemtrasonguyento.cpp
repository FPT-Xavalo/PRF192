#include<stdio.h>
#include<math.h>
int soNguyenTo(int soA)
{
    if (soA < 2)    
        return 0;
int i;
    for ( i = 2; i <= sqrt((float)soA); i ++)
    {
        if (soA%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
	int n;
	printf("Enter ");
	scanf(" %d",&n);
	soNguyenTo(n);
	if (soNguyenTo(n)==1){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
