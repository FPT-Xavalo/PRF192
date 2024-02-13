#include <stdio.h>
#include <stdlib.h>
double calculateS(int n);
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main() {
	system("cls");
	printf("\nTEST Q2 (3 marks):\n");
	int n;
	double sum;
	do {
		printf("Enter n = ");
		scanf("%d",&n);
	} while(n<=0);
	sum = calculateS(n);
	printf("\nOUTPUT:\n");
	printf("%.2lf",sum);
	printf("\n");
	system ("pause");
	return(0);
	//============================================================
}
//-----------------------------------------------------



	//Begin your codes here=====================
	
	double calculateS(int n) {
	double sum;
	int i;
for(i=1; i<=n; i++) {
sum += 1.0/(2*i - 1);
}
	
	
	//End your codes============================
	return sum;
}
