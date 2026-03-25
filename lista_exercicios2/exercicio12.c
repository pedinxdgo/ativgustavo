#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    char letra;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    for(int i = 0; i < strlen(palavra); i++) {
        if(palavra[i] == letra) {
            printf("A letra '%c' foi encontrada na palavra '%s' na posicao %d\n", letra, palavra, i);
        }
    }
}