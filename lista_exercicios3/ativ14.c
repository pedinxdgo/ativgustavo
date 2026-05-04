#include <stdio.h>

int main(){

    int contagem[7] = {0};

    for(int i = 0; i < 10; i++){
        int lado;
        printf("Voce jogou o dado! Insira o lado que caiu: ");
        scanf("%d", &lado);

        if(lado>=1 && lado<=6){
            contagem[lado]++;
        }
        else{
            printf("Valor invalido.\n");
            i--;
        }
    }

    for(int i = 1; i <= 6; i++){
        printf("Lado %d: %d\n", i, contagem[i]);
    }

}
