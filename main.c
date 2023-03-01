#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // lê a string do usuário

    len = strlen(str);

    // inverte a string
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("A string invertida é: %s", str);

    return 0;
}
