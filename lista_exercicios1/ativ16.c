#include <stdio.h>


float IMC(float peso, float altura){
        float resultado;
        printf("Digite seu peso em kg: \n");
        scanf("%f", &peso);
        printf("Digite sua altura em m: \n");
        scanf("%f", &altura);
        resultado = peso/(altura*altura);
        printf("Seu IMC e: %.2f \n", resultado);

        if(resultado < 18.5){
        printf("Voce esta abaixo do peso!\n");
    }
    else if(resultado >= 18.5 && resultado <= 24.9){
        printf("Voce esta no peso ideal!\n");
    }
    else if(resultado >= 25.0 && resultado <= 29.9){
        printf("Voce esta em sobrepeso!\n");
    }
    else{
        printf("Voce esta obeso!!\n");
    }

        return (resultado);
}

float boletim(float n1, float n2){
    float media;
    float nota1, nota2;
    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &nota2);
    media = (nota1 + nota2) /2;
    printf("A media do aluno e %.2f\n", media);

    if(nota1>10 || nota2>10 || nota1<0 || nota2<0){
    printf("Nota Iválida");
    }
    else if(media>=7.0){
    printf("Aprovado");
    }
    else if(media<7.0 && media>=5.0){
    printf("Em recuperacao");
    }
    else{
    printf("Reprovado");
    }
    return (media);
    }

int ehPar(int numero1){
    int verificar;
    int numero;
    printf("========== 0 - Par ========\n");
    printf("========== 1 - Impar ========\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0){
        verificar = 0;
    }
    else{
        verificar = 1;
    }
    printf("\nO numero e classificado como: %d", verificar);

    return (verificar);
    }


int main(){
    int funcao;
    float peso, altura;
    float nota1, nota2;
    int numero;
    float imc;
    int parOuImpar;
    float media;


    printf("============= 1 - Calcular IMC ============\n");
    printf("============= 2 - Calcular media ============\n");
    printf("============= 3 - Verificar par/impar ============\n");
    printf("============= 4 - Sair ============\n");
    printf("Digite uma opcao: ");
    scanf("%d", &funcao);
    switch(funcao){
        case 1:
            imc = IMC(peso, altura);
            break;
        case 2:
            media = boletim(nota1, nota2);
            break;
        case 3:
            parOuImpar = ehPar(numero);
            break;
        case 4:
            printf("Saindo do programa...");
            break;
        default:
            printf("Opcao invalida");
        }
    return 0;
}