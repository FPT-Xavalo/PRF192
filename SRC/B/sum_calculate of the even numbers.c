//The program needs to sum calculate of the even numbers among the entered values.

//Ngu?i dùng du?c yêu c?u nh?p sáu s? nguyên b?ng bàn phím (STDIN).

//Chuong trình c?n tính t?ng các s? ch?n trong s? các giá tr? dã nh?p.


#include <stdio.h>

int main() {
    int num, sum = 0;
    int i;

    printf("Enter six integers:\n");

    for(i = 0; i < 6; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            sum += num;
        }
    }

    printf("The sum of the even numbers is %d\n", sum);

    return 0;
}

