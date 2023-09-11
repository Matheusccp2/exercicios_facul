#include <stdio.h>

main () {

    printf("Calculo Salario\n");

    float hrs_trabalhadas, vlr_pHR, inss, valor_descnt, salario_bruto, salario_liquid;

    printf("Qual foi a quantidade de horas trabalhadas: \n");
    scanf("%f", &hrs_trabalhadas);

    printf("Quanto voce recebe por hora: \n");
    scanf("%f", &vlr_pHR);

    salario_bruto = hrs_trabalhadas * vlr_pHR;

    printf("Qual a porcentagem de desconto do INSS: \n");
    scanf("%f", &inss);

    inss = inss / 100;
    valor_descnt = salario_bruto * inss;
    salario_liquid = salario_bruto - valor_descnt;

    printf("O salario bruto e: %.3f\n", salario_bruto);
    printf("O valor descontado e: %.3f\n", valor_descnt);
    printf("O valor do salario liquido e: %.3f\n", salario_liquid);


}

