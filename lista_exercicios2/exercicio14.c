#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    int i, tamanho;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    tamanho = strlen(palavra);
    for(i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
}