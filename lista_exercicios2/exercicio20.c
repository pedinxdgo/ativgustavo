#include <stdio.h>
#include <string.h>

void main(){
    char usuario[50];
    char senha[20];
    printf("Digite seu usuario: \n");
    scanf("%s", usuario);
    printf("Digite sua senha: \n");
    scanf("%s", senha);
    int tamanho = strlen(senha);
    for(int i = tamanho; tamanho<8; i++){
        printf("A senha precisa ter 8 caracteres\n");
        printf("Digite sua senha: \n");
        scanf("%s", senha);
    }
}