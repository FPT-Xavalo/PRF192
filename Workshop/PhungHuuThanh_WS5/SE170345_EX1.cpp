#include <stdio.h>
void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
}
void printNegativeElements(int a[], int n){
	int i;
	printf("Negative elements are: ");
	for (i=0; i<n; i++){			
		if (a[i]<0){
			printf("%d ", a[i]);
		}
	}
}
int main(){
	int a[100], n=0;
	int i;
	do {
		printf("Enter the number of elements (n>=10): ");
		scanf("%d",&n);
	}while (n<10);
	inputArray(a, n);
	printNegativeElements(a, n);
	getchar();
	return 0;
}
