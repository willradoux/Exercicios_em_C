#include <stdio.h>

int fibonacci(int repeticao){
    int numero_atual = 1, numero_anterior = 1, soma, i;

    for(i = 0; i < repeticao; i++){

        printf("%d\n", numero_anterior);

        soma = numero_atual + numero_anterior;
        numero_anterior = numero_atual;
        numero_atual = soma;
    }
    return 0;
}

int main(){
    
    int repetir;

    printf("Deseja repetir Fibonacci ate quantas vezes?: ");
    scanf("%d", &repetir);

    fibonacci(repetir); 
    
    return 0;
}