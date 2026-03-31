#include <stdio.h>

void main(){
    char letra;
    printf("Insira uma letra: \n");
    scanf("%c", &letra);
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("A letra e vogal");
    }
    else{
        printf("A letra e consoante");
    }
}