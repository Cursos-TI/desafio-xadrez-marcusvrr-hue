#include <stdio.h>

// Torre: move para a direita recursivamente
void moverTorre(int casas) {
    if (casas <= 0) return; // acabou o movimento
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo: move diagonal para cima e direita
// Loop externo: vertical, loop interno: horizontal
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0) return;
    for (int h = 0; h < horizontal; h++) {
        printf("Cima, Direita\n");
    }
    moverBispo(vertical - 1, horizontal); // próximo passo vertical
}

// Rainha: move para a esquerda recursivamente
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Cavalo: move em "L" (2 cima + 1 direita) usando loops aninhados
void moverCavalo() {
    int casasParaCima = 2;
    int casasParaDireita = 1;

    for (int i = 0; i < casasParaDireita; i++) { // controla a casa perpendicular
        int passoCima = 0;
        while (passoCima < casasParaCima) { // sobe 2 casas
            printf("Cima\n");
            passoCima++;
            if (passoCima > casasParaCima) break; // só pra demonstrar break
        }
        if (i == 0) continue; // só pra mostrar continue
        printf("Direita\n"); // depois de subir, vai para a direita
    }
    printf("Direita\n"); // último passo para a direita
}

int main() {
    int casasTorre = 5;
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1; // diagonal horizontal
    int casasRainha = 8;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
