#include <stdio.h>

void sapXepTangDan(int arr[], int n) {
  int i, j, temp;
  for (i = 0; i < n-1; i++) {
    for (j = i+1; j < n; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("Mang theo thu tu tang dan: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int n, i;
  printf("Nhap so phan tu cua mang: ");
  scanf("%d", &n);
  int arr[n];
  printf("Nhap cac phan tu cua mang:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  sapXepTangDan(arr, n);
  return 0;
}

