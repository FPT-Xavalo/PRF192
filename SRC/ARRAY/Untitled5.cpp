#include <stdio.h>

// H�m ki?m tra s? nguy�n t?
int laSNT(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// H�m in ra c�c s? nguy�n t? trong m?ng theo th? t? tang d?n
void inSNT(int arr[], int size) {
    int temp;
    printf("C�c s? nguy�n t? trong m?ng theo th? t? tang d?n:\n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        if (laSNT(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[100], size;
    printf("Nh?p k�ch thu?c c?a m?ng: ");
    scanf("%d", &size);

    printf("Nh?p c�c ph?n t? c?a m?ng: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    inSNT(arr, size);
    return 0;
}

