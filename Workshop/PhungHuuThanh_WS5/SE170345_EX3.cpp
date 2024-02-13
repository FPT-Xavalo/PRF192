#include <stdio.h>
#include <stdbool.h>

void swap(float* a, float* b){
    float tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSortAscending(float a[], int n){
    int k, i;
    for (k = 0; k < n - 1; k++){
        for (i = 0; i < n - 1; i++){
            if (a[i] >= a[i+1]){
                swap(&a[i], &a[i+1]);
            }
        }
    }
}

void bubbleSortDecrease(float a[], int n){
    int k, i;
    for (k = 0; k < n - 1; k++){
        for (i = 0; i < n - 1; i++){
            if (a[i] <= a[i+1]){
                swap(&a[i], &a[i+1]);
            }
        }
    }
}

int getuserchoice(){
    int choice;
    printf("\nOption 1: Enter n values for the elements in the array.");
    printf("\nOption 2: Search a value.");
    printf("\nOption 3: Print out the prime numbers in the array.");
    printf("\nChoose 4: Sort the elements that are even in ascending order.");
    printf("\nChoose 5: Print out the array in descending order.");
    printf("\nOthers- Quit");
    printf("\nChoose: ");
    scanf("%d", &choice);
    printf("\n");
    return choice;    
}

void function1(float a[], int *n){
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", n);
    printf("Enter the values: \n");
    for (i=0; i <*n; i++){
        scanf("%f",&a[i]);
    }
}

float findValue(float a[], int n, float value, int result[]) {
    int i;
    int h=0;
    for (i = 0; i<n; i++) {
        if (a[i] == value) {
            result[h++] = i;
        }
    }
    return h;
}

float function2(float a[], int n){
    float value;
    int h, i;
    int result[100];
    printf("Enter the value to search: ");
    scanf("%f", &value);
    h = findValue(a, n, value, result);
    if (h == 0) {
        printf("Value not found ");
    } else {
        printf("%.2f found at positions ", value);
        for (i = 0; i < h; i++) {
            printf("%d ", result[i]);
        }
    }
    printf("in the array. \n");
}

float isPrime(int num){
    int i;
    if (num<2) {
        return 0;
    }
    for (i=2; i <= num/2; i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}

float function3(float a[], int n){
    int i;
    printf("The primes in the array are: \n");
    for (i=0; i<n; i++){
        if (isPrime((int)a[i])==1){
            printf("%.2f ", a[i]);
        }
    }
    printf("\n");
}

float function4(float a[],int n ){
    float evenNum[100];
    int i, j=0;
    printf("After sorting:\n");
    for (i=0; i< n; i++){
		if (a[i]%2==0){
		evenNum[j++]=a[i]; 
		}
	}
	bubbleSortAscending(evenNum, j);
	for (i=0; i< j; i ++){
		printf("%%.2f ",evenNum[i]);
	}
	printf("\n");
}

float function5(float a[],int n ){
	int i;
	float result[100];
	for (i = 0; i < 10; i++) {
        result[i] = a[i];
    }
	printf("After sorting: \n");
	bubbleSortDecrease(result, n);
	for (i=0; i< n; i ++){
		printf("%d ",result[i]);
	}
	printf("\n");
}
int main(){
	float a[100]; 
	int n=0;
	int luachon;

	do{	
		luachon = getuserchoice();
		switch(luachon){
			case 1: 
				function1(a, &n ); 
				break;
			case 2: 
				function2(a, n );
                break;
			case 3: 
				function3(a, n ); 
				break;
			case 4: 
				function4(a, n ); 
				break;
			case 5: 
				function5(a, n ); 
				break;
			default:
                printf("Exiting program..\n");
                break;
		}
	}while(luachon>0 && luachon <= 5);
	getchar();
	return 0;
}
