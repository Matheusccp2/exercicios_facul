#include <stdio.h>
#include <stdbool.h>

main () {

int n1, n2, equacao;
char sinal;


printf("Primeiro Numero: \n");
scanf("%d", &n1);

printf("Segundo Numero: \n");
scanf("%d", &n2);

printf("Sinal da equacao: \n");
scanf("%s", &sinal);


if (sinal == "s") {
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%s", sinal);
}


return (0);

}
