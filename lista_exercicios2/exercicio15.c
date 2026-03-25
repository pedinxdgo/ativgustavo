#include <stdio.h>
#include <string.h>

void main(){
    char frase[100];
    int espacos = 0;
    printf("Digite uma frase: ");
    scanf("%s", frase);
    fgets(frase, sizeof(frase), stdin);
    for(int i = 0; frase[i] != '\0' ; i++) {
        if(frase[i] == ' ') {
            espacos++;
        }
    }
    printf("A frase tem %d espacos", espacos);
}