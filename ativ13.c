#include <stdio.h>
 
int main(){
    int salario;
    float porcentagem;
    float NovoSalario;
    
    printf("=============Faixas Salariais e Imposto de Renda=============\n");
    printf("1 - Ate 5000 --- Imposto de 0,0 porcento\n");
    printf("2 - Ate 7350 --- Imposto de 15,0 porcento\n");
    printf("3 - A partir de 7351 --- Imposto de 27,5 porcento\n");
    printf("Digite seu salario:\n");
    scanf("%d", &salario);

    if(salario <= 5000){
        printf("Voce esta isento do imposto de renda!");
    }
    else if (salario <= 7350){
        porcentagem = 0.15;
        float imposto = salario * porcentagem;
        printf("Seu imposto de renda e de %d * %.3f = %.2f\n" , salario, porcentagem, imposto);
        NovoSalario = salario - (salario * porcentagem);
        printf("Seu novo salario e: %.2f", NovoSalario);
    }
    else if(salario >= 7351){
        porcentagem = 0.275;
        float imposto = salario * porcentagem;
        printf("Seu imposto de renda e de %d * %.3f = %.2f\n" , salario, porcentagem, imposto);
        NovoSalario = salario - (salario * porcentagem);
        printf("Seu novo salario e: %.2f", NovoSalario);
    }
    return 0;

}