#include <stdio.h>


int main()
{
	float altura, base;
	int refazer_calculo;
	
	do{
	
		printf("Insira um valor para altura: ");
		scanf("%f", &altura);
		
		printf("Insira um valor para base: ");
		scanf("%f", &base);
		
		float area = (base*altura);
		float perimetro = (base+altura);
		
		printf("Resultado da area do retangulo: %.2f\n", area);
		printf("Resultado da perimetro do retangulo: %.2f\n", perimetro);
		
		printf("Deseja refazer o calculo? 1 para continuar, 2 para encerrar: ");
		scanf("%d", &refazer_calculo);
			
	} while(refazer_calculo != 2);
	


printf("Codigo encerrado.");

return 0;
}



