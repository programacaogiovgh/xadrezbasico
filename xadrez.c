#include <stdio.h>

int main() {
    // ================= TORRE =================
    // A Torre se move em linha reta, na horizontal ou vertical.
    // Neste exemplo, ela anda 5 casas para a direita.
    // Usamos a estrutura "for" porque sabemos exatamente quantas vezes o movimento será repetido (5 vezes).
    int i;
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ================= BISPO =================
    // O Bispo se move apenas na diagonal, sempre combinando duas direções.
    // Neste caso, ele anda 5 casas para cima e para a direita (diagonal superior direita).
    // Usamos a estrutura "while" porque queremos repetir o movimento enquanto uma condição for verdadeira (j < 5).
    int j = 0;
    printf("Movimento do Bispo:\n");
    while (j < 5) {
        printf("Cima Direita\n");
        j = j + 1;
    }

    printf("\n");

    // ================= RAINHA =================
    // A Rainha é a peça mais poderosa: pode se mover em qualquer direção.
    // Aqui, ela anda 8 casas para a esquerda.
    // Usamos "do-while" para garantir que o movimento seja executado pelo menos uma vez.
    // A condição é verificada depois da repetição, ideal para situações onde queremos executar antes de verificar.
    int k = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k = k + 1;
    } while (k < 8);

    return 0;
}
//Escolhi o for para a Torre porque o movimento é direto e conhecido (5 vezes).
//Para o Bispo, usei while porque simula a condição de repetir enquanto está dentro dos limites.
//E para a Rainha, usei do-while porque é uma estrutura que sempre executa pelo menos uma vez, o que faz sentido já que a Rainha sempre pode se mover em alguma direção.
