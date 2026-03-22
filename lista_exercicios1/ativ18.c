#include <stdio.h>

float juros(int nParcela, float juros, float valor){
    juros = 0.12;
    float valorF;
    if(nParcela >= 12 && nParcela <24){
        juros = 0.62;
    }
    else if (nParcela >= 24 && nParcela < 36){
        juros = 1.12;
    }
    else if (nParcela >= 36 && nParcela < 48){
        juros = 1.62;
    }
    else{
        juros = 2.12;
    }
    valorF = valor + (valor * juros);
    return (valorF);
}
void main(){
    float valor;
    int nParcelas;
    float juro;
    printf("Digite o valor do financiamento: \n");
    scanf("%f", &valor);
    printf("Digite o numero de parcelas: \n");
    scanf("%d", &nParcelas);
    float financiamento = juros(valor, juro, nParcelas);
    printf("O valor do financiamento e: %.3f\n", financiamento);
}