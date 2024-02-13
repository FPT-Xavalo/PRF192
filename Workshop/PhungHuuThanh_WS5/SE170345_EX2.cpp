#include <stdio.h>
void inputArray(int a[], int *n){
	int i;
	for (i=0; i<*n; i++){
		scanf("%d",&a[i]);
	}
}
int findMax(int a[], int *n){
	int i;
	int max= a[0];
	for (i=1; i<*n; i++){			
		if (max<a[i]){
			max=a[i];
		}
	}
	return max;
}
int findSecondMax (int a[], int *n){
	int i;
	int semax= a[0];
	int max=findMax(a,n);
	for (i=1; i<*n; i++){		
		if (a[i] != max && a[i] > semax){
			semax=a[i];
		}
	}
	return semax;
}
int main(){
	int a[100], n=0;
	do {
		printf("Enter the number of elements (n>=10): ");
		scanf("%d",&n);
	}while (n<10);
	inputArray(a, &n);
	printf("First largest = %d\n", findMax(a, &n));
	printf("Second largest = %d", findSecondMax(a, &n));
	getchar();
	return 0;
}
