/*Your program allows users to enter a string: 's' with maximum length of 100 characters. 
The system finds characters in the alphabet in the position with an odd index to convert to uppercase characters.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[101];
    printf("Nhap mot chuoi (t?i da 100 ký t?):\n");
    fgets(s, sizeof(s), stdin); // d?c chu?i nh?p t? ngu?i dùng
    s[strcspn(s, "\n")] = '\0'; // lo?i b? ký t? xu?ng dòng t? chu?i nh?p
    int i;
    for ( i = 0; i < strlen(s); i++) {
        if (isalpha(s[i]) && i % 2 != 0) { // ki?m tra xem ký t? có n?m trong b?ng ch? cái và ? ch? s? l? không
            s[i] = toupper(s[i]); // chuy?n d?i ký t? thành ch? in hoa
        }
    }
    
    printf("Chuoi da duoc chinh sua: %s\n", s); // in ra chu?i dã du?c ch?nh s?a
    
    return 0;
}

