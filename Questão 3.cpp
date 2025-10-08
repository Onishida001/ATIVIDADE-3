// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano;

    printf("Digita um ano para verificar se e bissexto: ");
    scanf("%i", &ano);

    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                printf("O ano %i e bissexto.\n", ano);
            } else {
                printf("O ano %i nao e bissexto.\n", ano);
            }
        } else {
            printf("O ano %i e bissexto.\n", ano);
        }
    } else {
        printf("O ano %i nao e bissexto.\n", ano);
    }

    printf("\n");
    system("pause");

    return 0;
}
