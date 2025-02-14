#include <stdio.h>
#include <math.h>

int main()
{
	float lado_do_quadrado, area, perimetro;
	int refazer_calculo;
	
	do {
		printf("Insira um valor para o lado do quadrado: ");
		scanf("%f", &lado_do_quadrado);
	
		area = pow(lado_do_quadrado, 2);
		perimetro = (4*lado_do_quadrado);
	
		printf("Area do quadrado: %.2f ao quadrado\n", area);
		printf("Perimetro do quadrado: %.2f\n", perimetro);
		
		
		printf("Deseja refazer o calculo? 1 para continuar, 2 para encerrar: ");
		scanf("%d", &refazer_calculo);
	} while(refazer_calculo != 2);
	
	printf("Codigo encerrado");

	return 0;
}