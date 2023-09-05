#include <stdio.h>

// Função para imprimir o tabuleiro
void imprimirTabuleiro(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se alguém ganhou
int verificarVitoria(char tabuleiro[3][3], char jogador) {
    // Verificar linhas e colunas
    for (int i = 0; i < 3; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return 1;
        }
    }

    // Verificar diagonais
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1;
    }

    return 0;
}

int main() {
    char tabuleiro[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    int jogada = 1; // Iniciar com 1
    int linha, coluna;
    char jogadorAtual = 'X';
    int vitoria = 0;
    int empate = 0;

    printf("Bem-vindo ao Jogo da Velha!\n");

    while (jogada <= 9 && !vitoria && !empate) { 
        printf("\nTabuleiro atual:\n");
        imprimirTabuleiro(tabuleiro);

        printf("Jogador %c, escolha uma posição (1-9): ", jogadorAtual);
        scanf("%d", &jogada);

        if (jogada < 1 || jogada > 9) {
            printf("Posição inválida. Escolha uma posição válida (1-9).\n");
            continue;
        }

        linha = (jogada - 1) / 3; // Atualizara a linha serve para indentificar a linha 
        coluna = (jogada - 1) % 3; // Atualizara a coluna serve para indentificar a coluna

        if (tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O') {
            printf("Posição já ocupada. Escolha outra posição.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogadorAtual;

        vitoria = verificarVitoria(tabuleiro, jogadorAtual);

        if (!vitoria) {
            // Alternar jogadores
            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
            jogada++;
        }
    }

    printf("\nTabuleiro final:\n");
    imprimirTabuleiro(tabuleiro);

    if (vitoria) {
        printf("Jogador %c venceu!\n", jogadorAtual);
    } else if (jogada == 10 && !vitoria) {
        printf("O jogo empatou!\n");
    }

    return 0;
}
