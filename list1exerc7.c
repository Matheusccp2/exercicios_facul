#include <stdio.h>

main () {

int idade;

printf("Digite a idade da pessoa: \n");
scanf("%d", &idade);

if (idade > 11 && idade < 18) {
    printf("Voce e um adolescente\n");
} else {
        printf("Nao e um adolescente\n");
}

}


