#include <stdio.h>

int multa_por_quilo(int peso){

    int excesso = 50, multa;

    multa = peso - excesso;

    if (peso > excesso){
        printf("\nLimite excedito! Voce devera pagar: R$ %d,00 de multa.\n", multa * 4);
        }else{
        printf("\nNao havera multas, pois o limite de KG nao foi excedido.\n");
        }

    return multa;
}

int main(){

    int peso_dos_peixes, refazer_calculo;

    printf("\n           || Pesagem de peixes ||\n|| Multa de R$ 04,00 a cada KG acima de 50 || \n\n");

    while (refazer_calculo != 2){
        printf("\nPossui quantos quilos de peixes?: ");

        while ((scanf("%d", &peso_dos_peixes)) != 1 || peso_dos_peixes <=  0) {
            
            while ((peso_dos_peixes = getchar()) != '\n' && peso_dos_peixes != EOF);
            printf("\nInvalido! Digite QUANTOS QUILOS de peixes voce possui: ");
        }

        printf("\nVoce tem um total de %d KG de peixes!\n", peso_dos_peixes);

        multa_por_quilo(peso_dos_peixes);

        printf("\nDeseja refazer o calculo? 1 para continuar, 2 para encerrar: ");
		scanf("%d", &refazer_calculo);	
    }
    
    printf("Codigo encerrado.");
}