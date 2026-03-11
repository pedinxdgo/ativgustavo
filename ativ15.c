#include <stdio.h>

int main(){
    int valor;
    float desconto = 0.05;
    printf("Digite o valor da sua compra: ");
    scanf("%d", &valor);
    
    if(valor>100 && valor < 500){
        desconto = desconto * 2;
        printf("O seu desconto e: %.1f porcento\n", desconto * 100);
    }
    else if (valor > 500 && valor < 1000){
        desconto = desconto * 3;
        printf("O seu desconto e: %.1f porcento\n", desconto * 100);
    }
    else if(valor > 1000){
        desconto = desconto * 4;
        printf("O seu desconto e: %.1f porcento\n", desconto * 100);
    }
    float valorFinal = valor - (valor * desconto);
    
    printf("O valor apos desconto e: %.1f ", valorFinal);
    
}