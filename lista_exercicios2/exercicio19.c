#include <stdio.h>
#include <string.h>

char contarCaracteres(char palavra){
    palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    int contador;
    for (contador = 0; palavra[contador]  != 0;) {
        contador++;
    }
    printf("Quantidade de letras: %d \n", contador);
}


char contarVogais(char palavra2){
    char palavra[50];
    int vogais = 0;
    int i;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    for (i = 0; palavra[i] != '\0'; i++) {
        char c = palavra[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        vogais++;
        }
    }
    printf("Quantidade de vogais: %d \n", vogais);
}

char invertPalavra(char palavra3){
    char palavra[50];
    int i, tamanho;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    tamanho = strlen(palavra);
    for(i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
}




void main(){
    int opcao;
    char palavra[50];
    char palavra2[50];
    char palavra3[50];
    printf("======== 1 - Contar Caracteres ======== ");
    printf("======== 2 - Contar Vogais ======== ");
    printf("======== 3 - Inverter Palavra ======== ");
    printf("======== 4 - Sair ======== ");
    printf("Insira uma opcao: ");
    scanf("%d", &opcao);
    while(opcao != 4){
        switch(opcao){
            case 1:
            contarCaracteres(palavra);
            break;
            case 2:
            contarVogais(palavra2);
            break;
            case 3:
            invertPalavra(palavra3);
            break;
            case 4:
            printf("Saindo do programa");
            break;
            default:
            printf("Opcao invalida");
        }
    }

}