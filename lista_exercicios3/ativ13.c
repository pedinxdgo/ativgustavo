#include <stdio.h>
#include <string.h>

void main(){
    int questoes[30];
    char resposta[30];
    char gabarito[31] = {'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', '\0'};
    int corretas = 0;
    int incorretas = 0;
    for(int i = 0; i < 31; i++){
        printf("Insira a resposta da questão %d", i);
        scanf("%c", &resposta[i]);
        
        if(resposta[i] == gabarito[i]){
            corretas++;
        }
        else{
            incorretas++;
        }
    }
    int porcentagemAcerto = (questoes[30] * corretas) / 100;
    printf("O aluno acertou %d questoes", corretas);
    printf("Porcentagem de acerto: %d", porcentagemAcerto);

}