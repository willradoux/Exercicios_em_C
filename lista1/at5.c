#include <stdio.h>

int main(){
	
	int valorA, valorB, valorC;
	int refazer_calculo;
	
	do{
		printf("Insira um valora para A: ");
		scanf("%d", &valorA);
		printf("Insira um valora para B: ");
		scanf("%d", &valorB);
	
		if (valorA==valorB){ 
		valorC = valorA+valorB;
		printf("Soma de valorA e valorB: %d\n", valorC);
		
		}else{
		valorC = valorA*valorB;
		(printf("Multiplicacao de valorA e valorB: %d\n", valorC));
		}
		
		printf("Deseja refazer o calculo? 1 para continuar, 2 para encerrar: ");
		scanf("%d", &refazer_calculo);
		
	}while(refazer_calculo != 2);
	
	printf("Codigo encerrado.");
	
return 0;
}
