#include <stdio.h>
#include <string.h>

void main(){
    char frase[100];
    int maiusculas = 0;
    printf("Digite uma frase: ");
    scanf("%s", frase);
    fgets(frase, sizeof(frase), stdin);
}