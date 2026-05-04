#include <stdio.h>
#include <string.h>

int main(){
    char gabarito[31] = {'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', '\0'};
    char respostas[30];
    int contador = 0;
    int corretas = 0;
    for(int i = 0; i < 30; i++){
        contador++;
        printf("Insira a resposta da %d: ", contador);
        scanf(" %c", &respostas[i]);
    }
    for(int i = 0; i<30; i++){
        if(gabarito[i] == respostas[i]){
            corretas++;
        }
    }
    float porcentagemAcertos = (corretas*100)/30;
    printf("Acertos: %d\nPorcentagem de acertos: %.2f.", corretas, porcentagemAcertos);
}