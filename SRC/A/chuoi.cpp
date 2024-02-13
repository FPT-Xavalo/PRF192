#include <stdio.h>
#include <string.h>

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
    char string[100];
    printf("Nhap chuoi: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0'; // xóa kí t? xu?ng dòng ? cu?i chu?i
    int word_count = count_words(string);
    printf("So tu trong chuoi la: %d\n", word_count);
    return 0;
}

