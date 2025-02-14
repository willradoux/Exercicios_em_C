#include <stdio.h>

int divisao_por_cem(int centena){
    
    int resultado = (centena/100)*100;

    return(resultado);
}

int divisao_por_dez(int dezena, int diminuir){

    int resultado = (dezena-diminuir)/10*10;

    return(resultado);
}

int decompor_unidade(int unidade, int diminuirA, int diminuirB){

    int resultado = (unidade-diminuirA)-diminuirB;

    return(resultado);
}

int main(){

    int numero;
    int saida_centena, saida_dezena, saida_unidade;

    printf("Digite um numero para decompor: ");

    while ((scanf("%3d", &numero)) != 1) {
        while ((numero = getchar()) != '\n' && numero != EOF);
        printf("Digite um numero inteiro: ");
    }

    printf("Decompondo os 3 primeiros numeros: %3d\n", numero);

    saida_centena = divisao_por_cem(numero);

    printf("%d\n", saida_centena);

    saida_dezena = divisao_por_dez(numero, saida_centena);

    printf("%d\n", saida_dezena);

    saida_unidade = decompor_unidade(numero, saida_centena, saida_dezena);

    printf("%d\n", saida_unidade);

    printf("%d + %d + %d = %d\n", saida_centena, saida_dezena, saida_unidade, numero);

    printf("%d = %d centenas, %d dezenas, %d unidades", numero, saida_centena/100, saida_dezena/10, saida_unidade);
    
    return 0;
}