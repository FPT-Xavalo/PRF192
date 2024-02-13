/*Your program allows users to enter a string: 's' with maximum length of 100 characters. 
The system finds characters in the alphabet in the position with an odd index to convert to uppercase characters.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[101];
    printf("Nhap mot chuoi (t?i da 100 k� t?):\n");
    fgets(s, sizeof(s), stdin); // d?c chu?i nh?p t? ngu?i d�ng
    s[strcspn(s, "\n")] = '\0'; // lo?i b? k� t? xu?ng d�ng t? chu?i nh?p
    int i;
    for ( i = 0; i < strlen(s); i++) {
        if (isalpha(s[i]) && i % 2 != 0) { // ki?m tra xem k� t? c� n?m trong b?ng ch? c�i v� ? ch? s? l? kh�ng
            s[i] = toupper(s[i]); // chuy?n d?i k� t? th�nh ch? in hoa
        }
    }
    
    printf("Chuoi da duoc chinh sua: %s\n", s); // in ra chu?i d� du?c ch?nh s?a
    
    return 0;
}

