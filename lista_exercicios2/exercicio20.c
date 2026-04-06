#include <stdio.h>
#include <string.h>

void main(){
    char usuario[50];
    char senha[20];
    int login = 1;
    while(login == 1){
        printf("Digite seu usuario: \n");
        scanf("%s", &usuario);
        printf("Digite sua senha: \n");
        scanf("%s", &senha);
        if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0){
            printf("Login realizado com sucesso\n");
            login = 0;
        }
        else{
            printf("Dados de login invalidos\n");
        }
}
}