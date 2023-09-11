#include <stdio.h>

main () {

float hrs_trab, vlr_recebido, inss = 0.09, sal_bruto, vlr_desc, sal_liq;

printf("Quantas horas trabalhadas: \n");
scanf("%f", &hrs_trab);

printf("Qual o valor recebido por hora: \n");
scanf("%f", &vlr_recebido);

sal_bruto = hrs_trab * vlr_recebido;
vlr_desc = sal_bruto * inss;
sal_liq = sal_bruto - vlr_desc;

printf("O salario bruto e: %f\n", sal_bruto);
printf("O valor descontado e: %f\n", vlr_desc);
printf("O salario liquido e: %f\n", sal_liq);

return (0);

}
