#include <stdio.h>

main () {

int idade;

printf("Digite a idade da pessoa: \n");
scanf("%d", &idade);

if (idade <= 5) {
    printf("A crianca precisa ser vacinada \n");
}   else {
    printf("A crianca nao precisa ser vacinada \n");
}

return (0);

}

