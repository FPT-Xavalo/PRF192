#include<stdio.h>

int main(){
	long int tf, ti,n, thunhap, tax;
	int pa= 9000000, pd= 3600000;
	printf("Thu nhap cua ban la: ");
	scanf("%d",&thunhap);
	printf("Nhap so nguoi: ");
	scanf("%d",&n);
	tf=12*(pa+n*pd);
	printf("Thu nhap mien thue = %d\n", tf);
	ti= thunhap	- tf;
	if (ti<=0){
		tax=0;
		ti=0;
		printf("Thu nhap chiu thue = %d\n",ti);
		printf("Thue thu nhap = %d",tax);
		return 0;
		}
	if (ti<=5000000){
		tax=ti*0.05;
	    }
		else if (5000001<ti and ti< 10000000){
			tax=5000000*0.05 + (ti-5000001)*0.1;
			}
			else if(10000001<ti and ti <18000000){
				tax=5000000*0.05 + 5000000*0.1 + (ti-10000000)*0.15;
				}
				else {
				    tax=5000000*0.05 + 5000000*0.1 + 8000000*0.15 + (ti-18000000)*0.2;
				}
	    printf("Thu nhap chiu thue = %d\n", ti);
	    printf("Thue thu nhap = %d",tax);			
	    return 0;	
}
		
	
	
	
	

