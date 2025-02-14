#include <stdio.h>

int calculo_salario_liquido(float valor_por_horas, float horas_trabalhadas_mes){
    
    float salario_bruto, salario_liquido, desconto_IR, desconto_INSS, desconto_sindicato;

    salario_bruto = valor_por_horas * horas_trabalhadas_mes;
    desconto_IR = salario_bruto * 0.11;
    desconto_INSS = salario_bruto * 0.08;
    desconto_sindicato = salario_bruto * 0.05;
    salario_liquido = salario_bruto - (desconto_IR + desconto_INSS + desconto_sindicato);

    printf("Seu salario BRUTO: R$%.2f\n", salario_bruto);
    printf("IR (11%): R$%.2f\n", desconto_IR);
    printf("INSS (8%): R$%.2f\n", desconto_INSS);
    printf("Sindicato (5%): R$%.2f\n", desconto_sindicato);
    printf("Seu salariio e de: R$%.2f\n", salario_liquido);
}

int main(){
    int refazer_calculo;
    float valor_horas, horas_mes; 

    printf("\n           || Calculo de salario liquido || \n\n");

    while (refazer_calculo != 2){
        printf("Quanto voce ganha por hora?: ");
        scanf("%f", &valor_horas);

        printf("\nVoce trabalha quantas horas por mes?: ");
        scanf("%f", &horas_mes);

        calculo_salario_liquido(valor_horas, horas_mes);

        printf("\nDeseja refazer o calculo? 1 para continuar, 2 para encerrar: ");
	    scanf("%d", &refazer_calculo);
    }
    printf("Codigo encerrado.\n");
}