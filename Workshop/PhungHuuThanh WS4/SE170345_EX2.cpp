#include<stdio.h>
int getuserchoice(){
	int choice;
	printf("\nOption 1 choose 1");
	printf("\nOption 2 choose 2");
	printf("\nOption 3 choose 3");
	printf("\nChoose 4 --> Quit ");
	printf("\nChoose: ");
	scanf("%d", &choice);
	return choice;	
}

int SumofevennumberslessthanN(int n){
	int i;
	int sum = 0;
	for(i=2; i<n; i+=2){
		sum=sum+i;
	}
	return sum;
}

void function1(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Sum of even numbers less than %d = %d\n", n, SumofevennumberslessthanN(n));
}

int Sumofinputintegers(){
	int n;
	int sum=0;
	do{
		printf("Enter a number: ");
		scanf("%d", &n);
		sum=sum+n;
	}while (n!=0);
	return sum;
}

void function2(){
	printf("Sum of integers inputted until the value 0 is inputted.\n");
	printf("Sum = %d\n", Sumofinputintegers());
}

int checkleapyear(int year){
	int result= 0;
	if(year%4== 0 && year%100!= 0){
		result= 1;
	}
	return result;
}

void function3(){
	int year;
	printf("Enter year: ");
	scanf("%d", &year);
	if(checkleapyear(year)==1){
		printf("%d is a leap year!\n", year);
	}
	else{
		printf("%d isn't a leap year!\n", year);
	}
}

int main(){
	int luachon;
	do{	
		luachon = getuserchoice();
		switch(luachon){
			case 1: 
				function1(); 
				break;
			case 2: 
				function2(); 
				break;
			case 3: 
				function3(); 
				break;
			case 4:
				printf("Bye!\n");
				break;
			default:
                printf("Invalid choice.\n");
		}
	}while(luachon>0 && luachon<4);
	getchar();
	return 0;
}
