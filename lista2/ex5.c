#include <stdio.h>

int main (){

    float valorA, valorB, resultado; 
    int operacao;

    printf("\n >>>> || Calculadora em C || <<<< \n\n");

    printf("Digite dois valores: ");
    scanf("%f %f", &valorA, &valorB);

    printf("1 para somar\n");
    printf("2 para subtrair\n");
    printf("3 para dividir\n");
    printf("4 para multiplicar\n\n");

    printf("Digite qual operacao deseja realizar: ");
    scanf("%d", &operacao);
    
    switch (operacao){
        case 1:
            resultado = valorA + valorB;
            printf("%.2f + %.2f = %.2f", valorA, valorB, resultado);
            break;
        case 2:
            resultado = valorA - valorB;
            printf("%.2f + %.2f = %.2f", valorA, valorB, resultado);
            break;
        case 3:
            resultado = valorA / valorB;
            printf("%.2f + %.2f = %.2f", valorA, valorB, resultado);
            break;
        case 4:
            resultado = valorA * valorB;
            printf("%.2f + %.2f = %.2f", valorA, valorB, resultado);
            break;

        default:
            printf("Opcao nao valida");
            break;
    }
    return 0;
}