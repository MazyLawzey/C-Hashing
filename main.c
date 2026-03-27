#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void caesar_cipher(char *text, int shift) {
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        // проверяем, является ли символ буквой
        if (c >= 'a' && c <= 'z') {
            text[i] = (c - 'a' + shift) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            text[i] = (c - 'A' + shift) % 26 + 'A';
        }
    }
}

int main() {
    char text[100];
    int shift;

    printf("Введите текст для шифрования (на английском языке): ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Введите значение сдвига (количество позиций для сдвига): ");
    scanf("%d", &shift);

    caesar_cipher(text, shift);

    printf("Зашифрованный текст: %s\n", text);

    return 0;
}
