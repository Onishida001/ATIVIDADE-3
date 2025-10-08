// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, md;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    md = (n1 + n2 + n3) / 3.0;

    printf("\nSua media foi: %.1f\n", md);
    printf("Resultado: ");

    if (md == 0) {
        printf("Poxa, voce zerou a prova!\n");
    } else if (md > 0 && md <= 4) {
        printf("Voce esta reprovado!\n");
    } else if (md >= 4 && md < 6) {
        printf("Voce ficou de recuperacao!\n");
    } else if (md >= 6 && md < 10) {
        printf("Parabens, voce passou!\n");
    } else if (md == 10) {
        printf("Nossa, voce e um genio!!!\n");
    } else {
        printf("Nota invalida.\n");
    }

    printf("\n");
    system("pause");

    return 0;
}
