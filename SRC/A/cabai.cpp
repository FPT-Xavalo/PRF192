#include<stdio.h>
#include<math.h>
#include<string.h>
#define pi 3.14159
int area(int n){
	if (n<0){
		printf("-1");
	}
	else{
		int dt;
		dt= n*n*pi;
		printf("area:%d", dt);
}
}
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
void squareArray(int arr[], int size) {
	int i;
   for( i = 0; i < size; i++) {
      arr[i] = arr[i] * arr[i];
   }
}
int count_words(char string[]) {
    int count = 0;
    char *token = strtok(string, " "); // tách chu?i thành các t? d?a trên kho?ng tr?ng
    while (token != NULL) {
        count++;
        token = strtok(NULL, " "); // ti?p t?c tách t? ti?p theo
    }
    return count;
}
int main() {
   
int  choice;
	do{
		printf("\n1. The area of a circle.\n");
	printf("2. Checks for a perfect square\n");
	printf("3. Count the number of words in string.\n");
	printf("4. Square all the elements of an array.\n");
	printf("5.Exit ");
	printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
		case 1:{
			int n;
	printf("Enter radius:");
	scanf("%d",&n);
	area(n);
			break;
		}
		case 2:{
			int num;
	printf("Enter number:");
	scanf("%d",&num);
	if (so_chinh_phuong(num)){
		printf("Day la so chinh phuong",num);
		
	}else{
		printf("Day khong phai la so chinh phuong.\n",num);
	}
	so_chinh_phuong(num);
			break;
		}
		case 3:{
			char string[100];
    printf("Nhap chuoi: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0'; // xóa kí t? xu?ng dòng ? cu?i chu?i
    int word_count = count_words(string);
    printf("So tu trong chuoi la: %d\n", word_count);
			
			break;
		}
		case 4:{
			 int size;
printf("Nhap so luong phan tu cua mang: ");
   scanf("%d", &size);
int arr[size];
printf("Nhap cac phan tu cua mang:\n");
   int i;
   for(i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }
   squareArray(arr, size);
printf("Mang sau khi binh phuong:\n");
for( i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
			break;
		}
		case 5:
			printf("Enter your choice: \n");
			break;
		default:{
		printf("Invalid choice, please enter a number from 1 to 4\n");
                break;
		}	
	}
		}while(choice!=5);
getchar();
return 0;	
}
