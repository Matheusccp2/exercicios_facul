#include <stdio.h>
#include <locale.h>

main () {

float salario_min, meu_salario, qntd_salario_min;

printf("Qual o valor do salario minimo atual? \n");
scanf("%f", &salario_min);

printf("Qual o valor do seu salario? \n");
scanf("%f", &meu_salario);

qntd_salario_min = (meu_salario / salario_min);

printf("Voce recebe um salario de %.2f\n", meu_salario);
printf("Voce recebe %.1f salarios minimos \n", qntd_salario_min);

return(0);

}
