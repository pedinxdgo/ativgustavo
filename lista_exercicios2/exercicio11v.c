#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    int i;
    for(i = 50 ; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    }
