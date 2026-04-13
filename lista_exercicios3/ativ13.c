#include <stdio.h>
#include <string.h>

void main(){
    int questoes[30];
    int resposta[30];
    int gabarito[31] = {'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', '\0'};
    int corretas = 0;
    int incorretas = 0;
    for(int i = 0; i < 30; i++){
        printf("Insira a resposta da questão %d", i);
        scanf("%d", &resposta[i]);
        if(resposta[i] == gabarito){
            corretas++;
        }
    }

}