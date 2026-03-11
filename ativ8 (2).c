#include <stdio.h>
 
int main(){
    int salario;
    float porcentagem;
    float NovoSalario;
    printf("=============Faixas Salariais e Aumento=============\n");
    printf("1 - Ate 1518 --- Aumento de 6,79 porcento\n");
    printf("2 - Ate 3036 --- Aumento de 5,79 porcento\n");
    printf("3 - Ate 4554 --- Aumento de 4,79 porcento\n");
    printf("4 - Ate 5072 --- Aumento de 3,79 porcento\n");
    printf("5 - Ate 6590 --- Aumento de 2,79 porcento\n");
    printf("Digite seu salario:\n");
    scanf("%d", &salario);

    if(salario <= 1518){
        porcentagem = 0.0679;
        printf("Seu aumento e de %d * %.3f\n", salario, porcentagem);
        NovoSalario = salario + (salario * porcentagem);
        printf("Seu novo salario e: %.2f", NovoSalario);
    }
    else if (salario <= 3036){
        porcentagem = 0.0579;
        printf("Seu aumento e de %d * %.3f\n", salario, porcentagem);
        NovoSalario = salario + (salario * porcentagem);
        printf("Seu novo salario e: %.2f", NovoSalario);
    }
    else if(salario <= 4554){
        porcentagem = 0.0479;
        printf("Seu aumento e de %d * %.3f\n", salario, porcentagem);
        NovoSalario = salario + (salario * porcentagem);
        printf("Seu novo salario e: %.2f", NovoSalario);
    }
    else if(salario <= 5072){
        porcentagem = 0.0379;
        printf("Seu aumento e de %d * %.3f\n", salario, porcentagem);
        NovoSalario = salario + (salario * porcentagem);
        printf("Seu novo salario e: %.2f", NovoSalario);
    }
    else if (salario <= 6590){
        porcentagem = 0.0279;
        printf("Seu aumento e de %d * %.3f\n", salario, porcentagem);
        NovoSalario = salario + (salario * porcentagem);
        printf("Seu novo salario e: %.2f", NovoSalario);
    }
    else{
    printf("Salario sem aumento\n Faz o L");
    }

    return 0;

}