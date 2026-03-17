#include <stdio.h>

float boletim(float n1, float n2){
    float media;
    media = (n1 + n2) /2;
    return (media);
    }

void main(){
    int faltas;
    float n1, n2;
    int aulas = 200;
    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    float media = boletim(n1, n2);
    printf("Digite o numero de faltas: \n");
    scanf("%d", &faltas);
    float presenca = (100 * faltas)/aulas;

    if(n1<0 || n1>10 || n2<0 || n2>10 || faltas > aulas){
        printf("Numeros invalidos");
    }
    else if(presenca > 25 && media >=7.0){
        printf("Reprovado por faltas");
    }
    else if(presenca < 25 && media>= 7.5){
        printf("Aprovado");
    }
    else if(presenca < 25 && media <7.5){
        printf("Reprovado por media");
    }
    else if(presenca >25 && media <7.0){
        printf("Reprovado");
    }
    }