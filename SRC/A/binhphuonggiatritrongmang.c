/*Write a function to square all the elements of an array. 
For example, if the input array is (1,4,5,8) then the function returns (1,16,25,84). */

#include <stdio.h>
void squareArray(int arr[], int size) {
	int i;
   for( i = 0; i < size; i++) {
      arr[i] = arr[i] * arr[i];
   }
}
int main() {
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

   return 0;
}

