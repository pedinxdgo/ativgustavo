#include <stdio.h>

void main(){
    printf("========== 13 - Lula ===========\n");
    printf("========== 22 - Bolsonaro ===========\n");
    printf("========== 33 - Ciro Gomes ===========\n");
    int candidato;
    printf("Digite o numero do candidato: ");
    scanf("%d", &candidato);
    switch(candidato){
        case 13:
            printf("Voce votou no Lula");
            break;
        case 22:
            printf("Voce votou no Bolsonaro");
            break;
        case 33:
            printf("Voce votou no Ciro Gomes");
            break;
        default:
            printf("Numero de candidato invalido");
    }
}