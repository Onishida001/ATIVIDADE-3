// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    if (n % 2 == 0) {
        printf("\nO numero %i e par.\n", n);
    } else {
        printf("\nO numero %i e impar.\n", n);
    }

    printf("\n");
    system("pause");

    return 0;
}
