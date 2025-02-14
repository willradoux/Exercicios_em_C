#include <stdio.h>


int main()
{
	int valorA, valorB, valorC, refazer_calculo;
	
	
	do {
		printf("Digite um valor A: ");
		scanf("%d", &valorA);
	
		printf("Digite um valor B: ");
		scanf("%d", &valorB);

		printf("Digite um valor C: ");
		scanf("%d", &valorC);
			
		int soma = valorA+valorB;
		
		if (soma < valorC){
		printf("O resultado da soma de A e B e menor do que C: %d\n", soma);
			
		}else if (soma == valorC){
		printf("O resultado da soma de A e B e igual do que C: %d\n", soma);
			
		}else {
		printf("O resultado da soma de A e B e maior do que C: %d\n", soma);
		}
		
		printf("Deseja refazer o calculo? 1 para continuar, 2 para sair: ");
		scanf("%d", &refazer_calculo);
		
	}while (refazer_calculo != 2);
			
printf("Fim do programa.");
return 0;
}
