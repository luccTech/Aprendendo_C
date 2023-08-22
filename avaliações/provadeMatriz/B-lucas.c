/*
istituto:                IFBA               Data: 01/08/2023
Aluno: Lucas Barbosa Barreto                Turma: 2º INF-B
Disciplina: Algoritimos            Professora: Stefani Pires
Tema: Avaliação soma/subtração/multiplicação de matrizes. */

#include <stdio.h>

// Função para preencher a matriz
void preencherMatriz(float matriz[][100], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Função par exibiras matrizes lado a lado
void matrizLadoALado(int linha, int coluna, float a[][100], float b[][100]){
        printf("\n>  Matriz A: ");
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            if(a[i][j] > 9 || a[i][j] < 0){
                printf("%g ", a[i][j]); // Ei prof descobri esse %g que abrevia os fracionarios Ex: 1,00000 para 1 olha q legal!
            }
            else{
                printf("%g  ", a[i][j]);   
            }
        }
        if(i==0){
            printf("      Matriz B: ");
        }
        else{
            printf("                ");
        }
        for(int j=0; j<coluna; j++){
            if(b[i][j] > 9 || b[i][j] < 0){
                printf("%g ", b[i][j]);
            }
            else{
                printf("%g  ", b[i][j]);   
            }
        }
        printf("\n             "); 
    }
}

// Função para exibir uma matriz
void exibirMatriz(float matriz[][100], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if((matriz[i][j]) >= 9 || (matriz[i][j]) < 0){
                printf("%g ", matriz[i][j]);
            }
            else{
                printf("%g  ", matriz[i][j]);   
            }
        }
        printf("\n                                   ");
    }
}
// Função para realizar a soma das matrizes
void somarMatrizes(float matrizA[][100], float matrizB[][100], float resultado[][100], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

// Função para realizar a subtração das matrizes
void subtrairMatrizes(float matrizA[][100], float matrizB[][100], float resultado[][100], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

// Função para realizar a multiplicação das matrizes
void multiplicarMatrizes(float matrizA[][100], float matrizB[][100], float resultado[][100], int linhasA, int colunasA, int colunasB) {
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunasA; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

int main() {
    float matrizA[100][100], matrizB[100][100], resultado[100][100];
    int linhasA, colunasA, linhasB, colunasB;


    // Solicitar as dimensões das matrizes ao usuário
    printf("> Digite as dimencoes das matrizes: ");
    scanf("%d %d", &linhasA, &colunasA);
    linhasB = linhasA;
    colunasB = colunasA;
    int fim;

    if (colunasA != linhasB) {
        printf("> As matrizes fornecidas nao podem ser multiplicadas.\n");
        printf("\n");
        system ("PAUSE");

        return 0;
    }

    // Preencher as matrizes A
    printf("Preencha a matriz A: ");
    preencherMatriz(matrizA, linhasA, colunasA);
    // Preencher as matrizes A
    printf("Preencha a matriz B:");
    preencherMatriz(matrizB, linhasB, colunasB);

    // Exibir as matrizes A e B
    matrizLadoALado(linhasA, colunasA, matrizA, matrizB );  

    // Realizar as operações
    somarMatrizes(matrizA, matrizB, resultado, linhasA, colunasA);
    printf("\n> Soma de A e B:                   ");
    exibirMatriz(resultado, linhasA, colunasA);

    subtrairMatrizes(matrizA, matrizB, resultado, linhasA, colunasA);
    printf("\n> Subtacao de A e B:               ");
    exibirMatriz(resultado, linhasA, colunasA);

    multiplicarMatrizes(matrizA, matrizB, resultado, linhasA, colunasA, colunasB);
    printf("\n> multiplicacao de A e B:          ");
    exibirMatriz(resultado, linhasA, colunasB);

    // encerra programa.
    printf("\n");
    system ("PAUSE");


    return 0;
}