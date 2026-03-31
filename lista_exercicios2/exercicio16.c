#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    char palavraInvertida[50];
    int i, tamanho;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    tamanho = strlen(palavra);
    for(i = 0; i < tamanho; i++) {
        if (palavra[i] != palavra[tamanho - i - 1]) {
            printf("\nA palavra inserida nao eh um palindromo");
        }
    }
    printf("A palavra e um palindromo");
}
