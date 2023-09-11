#include <stdio.h>

int main () {

float salario_min, meu_salario, qntd_salario_min;

printf("Qual o valor do salario minimo atual? ");
scanf("%f", &salario_min);

printf("Qual o seu salario?");
scanf("&f", &meu_salario);

qntd_salario_min = (meu_salario / salario_min);

printf("O valor atual do salario minimo é ", &salario_min);
printf("O meu salario é ", &meu_salario);
printf("A quantidade em salarios minimos que recebo é: ", &qntd_salario_min);

return(0);

}
