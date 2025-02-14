#include <stdio.h>
#include <math.h>

int main(){

    int numero, soma;
    int centena, dezena, unidade;
    double expoente_centena, expoente_dezena, expoente_unidade;

    printf("Identiicar numero nacisista com apenas 3 unidades.\n");
    printf("Digite um numero com ate 3 unidades: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;
    
    expoente_centena = pow(centena, 3);
    expoente_dezena = pow(dezena, 3);
    expoente_unidade = pow(unidade, 3);

    soma = expoente_centena + expoente_dezena + expoente_unidade;

    printf("%d\n", numero);

    if (soma == numero){
        printf("Numero narcisista?: Sim\n", numero);
    } else{
        printf("Numero narcisista?: Nao\n", numero);
    }

    return 0;
}