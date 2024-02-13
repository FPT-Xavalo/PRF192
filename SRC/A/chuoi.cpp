#include <stdio.h>
#include <string.h>

int count_words(char string[]) {
    int count = 0;
    char *token = strtok(string, " "); // t�ch chu?i th�nh c�c t? d?a tr�n kho?ng tr?ng
    while (token != NULL) {
        count++;
        token = strtok(NULL, " "); // ti?p t?c t�ch t? ti?p theo
    }
    return count;
}

int main() {
    char string[100];
    printf("Nhap chuoi: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0'; // x�a k� t? xu?ng d�ng ? cu?i chu?i
    int word_count = count_words(string);
    printf("So tu trong chuoi la: %d\n", word_count);
    return 0;
}

