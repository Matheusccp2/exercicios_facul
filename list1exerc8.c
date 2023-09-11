#include <stdio.h>

main () {

int idade;
char nome[30];
char sexo;

printf("Digite o seu nome: \n");
scanf("%s", &nome);

printf("Digite a sua idade: \n");
scanf("%d", &idade);

printf("Digite o seu sexo (M/F): \n");
scanf("%s", &sexo);

if (sexo == 'f' && sexo == 'F') {
        if (idade > 25) {
                printf("ACEITA");
        } else {
                printf("NAO ACEITA");
            }
        }


}

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;
    char sexo;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'F' || sexo == 'f') {
        if (idade < 25) {
            printf("%s, aceita.\n", nome);
        } else {
            printf("Não aceita.\n");
        }
    } else {
        printf("Não aceita.\n");
    }

    return 0;
}
