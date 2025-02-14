#include <stdio.h>

int main(){

    char nome[50];
    int idade;
    int valor_a_pagar;
    int refazer_calculo;


    do{
        printf("Digite seu nome: ");
        scanf("%49s", &nome);
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if(idade <= 10){
        valor_a_pagar = 300.00;
        printf("%s, voce devera pagar: R$ %d\n", nome, valor_a_pagar);

        }else if(idade <= 29){
        valor_a_pagar = 600.00;

        printf("%s, voce devera pagar: R$ %d\n", nome, valor_a_pagar);
        }else if(idade <= 45){
        valor_a_pagar = 1200.00;

        printf("%s, voce devera pagar: R$ %d\n", nome, valor_a_pagar);
        }else if(idade <= 59){
        valor_a_pagar = 1500.00;

        printf("%s, voce devera pagar: R$ %d\n", nome, valor_a_pagar);
        }else if(idade <= 65){
        valor_a_pagar = 2500.00;

        printf("%s, voce devera pagar: R$ %d\n", nome, valor_a_pagar);
        }else{
        (idade > 65);
        valor_a_pagar = 4000.00;

        printf("%s, voce devera pagar: R$ %d\n", nome, valor_a_pagar);
        }

        printf("Deseja refazer o calculo? 1 para continuar, 2 para encerrar: ");
		scanf("%d", &refazer_calculo);
        
    }while(refazer_calculo == 1);
    

    printf("Codigo encerrado.");
    return 0;   
}