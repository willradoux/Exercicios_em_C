#include <stdio.h>

int numero_par(int numero_par){

    do{
        printf("Digite um numero IMPAR, para ser o numero maximo: ");
        scanf("%d", &numero_par);
        if (numero_par % 2 == 0){
            printf("Invalido! Digite um numero impar: ");
        }
    }while(numero_par % 2 == 0);
    
    return numero_par;
}

int main(){
    int numero_max, i;

    numero_max = numero_par(numero_max);

    for (i = 1; i <= numero_max; i++){
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}