#include <stdio.h>

int main(){
    int candidato;
    printf("==========================================\n");
    printf("========= 13 - Lula ===========\n");
    printf("========= 22 - Bolsonaro ===========\n");
    printf("==========================================\n");
    printf("=========Escolha seu candidato===========\n");
    scanf("%d", &candidato);
    switch(candidato){
        case 13:
        printf("Voto confirmado no candidato Lula");
        break;
        case 22:
        printf("Voto confirmado no candidato Bolsonaro");
        break;
        default:
        printf("Candidato nao encontrado");
    }
}