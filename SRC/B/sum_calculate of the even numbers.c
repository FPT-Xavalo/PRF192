//The program needs to sum calculate of the even numbers among the entered values.

//Ngu?i d�ng du?c y�u c?u nh?p s�u s? nguy�n b?ng b�n ph�m (STDIN).

//Chuong tr�nh c?n t�nh t?ng c�c s? ch?n trong s? c�c gi� tr? d� nh?p.


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

