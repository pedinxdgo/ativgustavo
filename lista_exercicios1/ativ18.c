#include <stdio.h>
#include <math.h>

float jurosCompostos(int nParcela, float juros, float valor){
    float montante;
    montante = valor * pow(1 + juros, nParcela);
    return (montante);

}
void main(){
    float valor;
    int nParcelas;
    float juro;
    juro = 0.012;
    printf("Digite o valor do financiamento: \n");
    scanf("%f", &valor);
    printf("Digite o numero de parcelas: \n");
    scanf("%d", &nParcelas);
    float financiamento = jurosCompostos(nParcelas, juro, valor);
    printf("O valor do financiamento e: %.3f\n", financiamento);
}