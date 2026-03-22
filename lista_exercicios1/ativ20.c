//Classificação de triângulo (não forma, equilátero, isósceles, escaleno)
#include <stdio.h>

void main(){
    int lado1, lado2, lado3;
    printf("Digite o valor do primeiro lado do triangulo: ");
    scanf("%d", &lado1);
    printf("Digite o valor do segundo lado do triangulo: ");
    scanf("%d", &lado2);
    printf("Digite o valor do terceiro lado do triangulo: ");
    scanf("%d", &lado3);

    if(lado1 <= 0 || lado2 <= 0 || lado3 <= 0){
        printf("Valor invalido");
    }
    else if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
        printf("O triangulo e equilatero");
    }
    else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("O triangulo e isosceles");
    }
    else{
        printf("O triangulo e escaleno");
    }
}