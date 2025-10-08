// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    if (n > 100) {
        printf("\nNumero centenario!\n");
    }

    printf("\n");
    system("pause");

    return 0;
}
