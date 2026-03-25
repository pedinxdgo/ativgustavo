#include <stdio.h>
#include <string.h>

void main(){
    char palavra1[50];
    char palavra2[50];
    printf("Digite uma palavra: ");
    scanf("%s", &palavra1);
    printf("Digite uma palavra: ");
    scanf("%s", &palavra2);
    if(strcmp(palavra1, palavra2) == 0){
        printf("As palavras sao iguais");
    } else {
        printf("As palavras sao diferentes");
    }
}