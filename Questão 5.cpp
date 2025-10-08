// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    const int vm = 80;
    int vel;

    printf("--- Radar Jao Mane ---\n");
    printf("Digite a velocidade que o carro passou (Km/h): ");
    scanf("%i", &vel);

    if (vel > vm) {
        printf("\nvoce foi multado!\n");
    } else {
        printf("\nDesta vez voce escapou!\n");
    }

    printf("\n");
    system("pause");

    return 0;
}
