#include <stdio.h>

float boletim(float n1, float n2){
    float media;
    media = (n1 + n2) /2;
    return (media);
    }

int main(){
    float nota1, nota2, mediaF;
    printf("Digite sua primeira nota:");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota:");
    scanf("%f", &nota2);
    mediaF = boletim(nota1, nota2);
    printf("\nSua media e: %.2f\n", mediaF);

    if(nota1>10 || nota2>10 || nota1<0 || nota2<0){
    printf("Nota Iválida");
    }
    else if(mediaF>=7.0){
    printf("Aprovado");
    }
    else if(mediaF<7.0 && mediaF>=5.0){
    printf("Em recuperacao");
    }
    else{
    printf("Reprovado");
    }
    
    return 0;
}