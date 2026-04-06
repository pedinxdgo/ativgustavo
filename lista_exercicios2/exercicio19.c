#include <stdio.h>
#include <string.h>

int contarCaracteres(){
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    int contador;
    for (contador = 0; palavra[contador]  != 0;) {
        contador++;
    }
    printf("Quantidade de letras: %d \n", contador);
    return 0;
}


int contarVogais(){
    char palavra[50];
    int vogais = 0;
    int i;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    for (i = 0; palavra[i] != '\0'; i++){
        char c = palavra[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        vogais++;
        }
    }
    printf("Quantidade de vogais: %d \n", vogais);
    return 0;

}

char invertPalavra(){
    char palavra[50];
    int i, tamanho;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    tamanho = strlen(palavra);
    for(i = tamanho - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");
    return 0;
}




void main(){
    int opcao;
    bool ligado = true;
    
    while(ligado == true){
        printf("======== 1 - Contar Caracteres ======== \n");
        printf("======== 2 - Contar Vogais ======== \n");
        printf("======== 3 - Inverter Palavra ======== \n");
        printf("======== 4 - Sair ======== \n");
        printf("Insira uma opcao: \n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
            contarCaracteres();
            break;
            case 2:
            contarVogais();
            break;
            case 3:
            invertPalavra();
            break;
            case 4:
            printf("Saindo do programa");
            ligado = false;
            break;
            default:
            printf("Opcao invalida\n");
            }
}
}
