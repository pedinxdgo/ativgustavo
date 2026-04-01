#include <stdio.h>
#include <string.h>

void main(){
    char frase[100];
    int maiusculas = 0;
    printf("Digite uma frase: ");
    scanf("%s", frase);
    fgets(frase, 100, stdin);
    for(int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] >= 'A' && frase[i] <= 'Z') {
            maiusculas++;
        }
    }
    printf("A quantidade de maiusuculas na frase e: %d\n", maiusculas);
}