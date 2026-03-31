#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    char trocar = 'a';
    char substituto = '@';
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    for (int i = 0; palavra[i] != '\0'; i++) {
        if(palavra[i] == trocar){
            palavra[i] = substituto;
        }
}
    printf("A palavra invertida e: %s", palavra );
}