#include <stdio.h>

int main(){

	char nome[50];
	char sobrenome[50];
	char turno[2];
	int refazer_calculo;

	do{
		printf("Insira o seu nome: ");
		scanf("%49s", &nome);
	
		printf("Insira o seu sobrenome: ");
		scanf("%49s", &sobrenome);

		printf("Em qual turno voce estuda? M se for matutino; ou V se for Vespertino ou N se for Noturno: ");
		scanf("%1s", &turno);
	
		if(turno == 'M'){
		printf("Bom dia! %s %s\n", nome, sobrenome);
		
		}else if(turno == 'V'){
		printf("Boa tarde! %s %s\n", nome, sobrenome);
		
		}else{
		printf("Boa noite! %s %s\n", nome, sobrenome);
		}
	
		printf("Deseja refazer o calculo? 1 para continuar, 2 para encerrar: ");
		scanf("%d", &refazer_calculo);	

	}while(refazer_calculo == 1);
		
	printf("Codigo encerrado.");
	return 0;
}