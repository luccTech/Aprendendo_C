#include <stdio.h>

char tabuleiro[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

int jogada = 0;          // Contador de jogadas
char jogadorAtual = 'X'; // Começamos com o jogador 'X'

// Função para imprimir o tabuleiro
void imprimirTabuleiro() {
    printf("\nTabuleiro atual:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", tabuleiro[i][j]); // Imprime o tabuleiro
        }
        printf("\n");
    }
}

// Função para verificar se alguém ganhou
int verificarVitoria(char jogador) {
    for (int i = 0; i < 3; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return 1; // Retorna 1 se houver uma linha ou coluna completa
        }
    }

    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1; // Retorna 1 se houver uma diagonal completa
    }

    return 0; // Retorna 0 se ninguém vencer ainda
}

int main() {
    printf("Bem-vindo ao Jogo da Velha!\n");

    while (jogada < 9) { // O jogo continua até que todas as 9 jogadas sejam feitas
        imprimirTabuleiro();

        int escolha;
        printf("Jogador %c, escolha uma posicao (1-9): ", jogadorAtual);
        scanf("%d", &escolha);

        if (escolha < 1 || escolha > 9) {
            printf("Posição invalida. Escolha uma posicao valida (1-9).\n");
            continue; // Volta ao início do loop se a escolha for inválida
        }

        int linha = (escolha - 1) / 3; // Calcula a linha com base na escolha
        int coluna = (escolha - 1) % 3; // Calcula a coluna com base na escolha ex: coluna = (escolha - 1) % 3; // (5 - 1) % 3 = 4 % 3 = 1

        if (tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O') {
            printf("Posicao ja ocupada. Escolha outra posicao.\n");
            continue; // Volta ao início do loop se a posição estiver ocupada
        }

        tabuleiro[linha][coluna] = jogadorAtual; // Atualiza o tabuleiro com a jogada

        if (verificarVitoria(jogadorAtual)) {
            imprimirTabuleiro();
            printf("Jogador %c venceu!\n", jogadorAtual);
            break; // Termina o jogo se houver um vencedor
        }

        jogada++; // Incrementa o contador de jogadas
        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X'; // Alterna o jogador
    }

    return 0;
}
