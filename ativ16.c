#include <stdio.h>


float IMC(float peso, float altura){
        float resultado;

        resultado = peso/(altura*altura);

        return (resultado);
}

float boletim(float n1, float n2){
    float media;
    media = (n1 + n2) /2;
    return (media);
    }

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
    int funcao;
    do {
    printf("============= 1 - Calcular IMC ============\n");
    printf("============= 2 - Calcular media ============\n");
    printf("============= 3 - Verificar par/impar ============\n");
    printf("============= 4 - Sair ============\n");

    
    printf("Digite uma opcao: ");
    scanf("%d", &funcao);

    switch(funcao){
        case 1:
            int peso;
            float altura;
            
            printf("Digite seu peso em kg: ");
            scanf("%d", &peso);
            printf("Digite sua altura em cm: ");
            scanf("%f", &altura);
            float imc = IMC(peso, altura);
            printf("Seu IMC e: %f", imc);
            break;
        case 2:
            float nota1;
            float nota2;
            printf("Digite a primeira nota do aluno: \n");
            scanf("%f", &nota1);
            printf("Digite a segunda nota do aluno: \n");
            scanf("%f", &nota2);
        
            float media = boletim(nota1, nota2);
            printf("A media do aluno e %.2f", media);
            break;
        case 3:
            int numero;
            printf("========== 0 - Par ========");
            printf("========== 1 - Impar ========");
            printf("digite um numero: ");
            scanf("%d", &numero);
            int parOuImpar = ehPar(numero);
            printf("O numero e classificado como: %d", parOuImpar);
            break;
        case 4:
            printf("Saindo do programa...");
        default:
            printf("Opcao invalida");
        }
    } while(funcao != 4 );
    return 0;
}
