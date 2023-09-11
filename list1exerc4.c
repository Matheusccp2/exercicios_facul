#include <stdio.h>

main () {

float num1, num2, resultado;
char operador;

printf("Digite o primeiro numero: \n");
scanf("%f", &num1);

printf("Digite o segundo numero: \n");
scanf("%f", &num2);

printf("Digite o operador (+ ou -): \n");
scanf(" %c", &operador);

if (operador == '+') {
    resultado = num1 + num2;
    printf("Resultado da soma: %.2f\n", resultado);
    }   else if (operador == '-') {
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
        }   else {
                printf("Operador invalido. \n");
}

}
