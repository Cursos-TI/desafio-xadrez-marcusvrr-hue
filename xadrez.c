#include <stdio.h>

int main() {
    // Torre -> 5 casas pra direita (for)
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Bispo -> 5 casas na diagonal cima direita (while)
    int j = 1;
    printf("Movimento do Bispo:\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Rainha -> 8 casas pra esquerda (do-while)
    int k = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
