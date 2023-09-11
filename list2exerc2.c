#include <stdio.h>

main () {

printf("Consumo medio de um automovel\n");
float dist_total, comb_lt, total;

printf("Qual foi a distancia percorrida: \n");
scanf("%f", &dist_total);

printf("Qual foi a quantidade de combustivel gasta: \n");
scanf("%f", &comb_lt);

total = dist_total / comb_lt;

printf("O gasto medio de KM/L e: %f", total);

return(0);

}
