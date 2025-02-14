#include <stdio.h>

int main(){

    int num1, num2, i, resultado = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    printf("%d x %d = ", num1, num2);

    for(i = 0; i < num2; i++){
        resultado += num1;
        printf("%d", num1);

        if(i < num2 - 1){
            printf(" + ");
        }

    }

    printf(" = %d\n", resultado);
    
    return 0;
}