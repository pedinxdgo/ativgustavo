#include <stdio.h>

int ehPar(int numero1){
    int verificar;
    if (numero1 % 2 == 0){
        verificar = 0;
    }
    else{
        verificar = 1;
    }
    return (verificar);
    }

int main(){
    int numero;
    printf("====== 0 - Par ======\n");
    printf("====== 1 - Impar ======\n");
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    int parOuImpar = ehPar(numero);
    printf("O numero e classificado como: %d", parOuImpar);

    return 0;
}