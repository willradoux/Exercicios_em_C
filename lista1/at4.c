#include <stdio.h>
#include <math.h>

int main(){
	
	float raio, area, perimetro, raio_ao_quadrado;
	int refazer_calculo;
	
	do{
		
		printf("Insira um valor para o raio da circunferencia: ");
		scanf("%f", &raio);
	
		raio_ao_quadrado = pow(raio,2);
		area = 3.14*raio_ao_quadrado;
		perimetro = (2*3.14*raio);

		printf("Resultado da area: %.2f\n", area);
		printf("Resultado do perimetro: %.2f\n", perimetro);
		
		printf("Deseja refazer o calculo? 1 para continuar, 2 para encerrar: ");
		scanf("%d", &refazer_calculo);
	}while(refazer_calculo != 2);
	
	printf("Codigo encerrado.");
	return 0; 
}
