#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    int i;
    for(i = strlen(palavra) ; i >= 0; i--) {
            printf("%c", palavra[i]);
        }
    }
