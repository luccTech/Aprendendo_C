/*
istituto:                IFBA               Data: 24/08/2023
Aluno: Lucas Barbosa Barreto                Turma: 2º INF-B
Disciplina: Algoritimos            Professora: Stefani Pires
Tema: Ponteiros/ Atividade de sala. */

#include <stdio.h>

#include <stdio.h>

int incrementar_2(int *A,int *B,int *r){
    *A = *A * 2;
    *B = *B * 2;
    return *r = *B + *A;
}

int main(void){
    int A, B ,r;

    printf("Digite dois numero inteiros: ");
    scanf("%d %d", &A, &B);
    incrementar_2(&A,&B, &r);
    printf("A soma do dobro A + B =%d\n",r);
    printf("O valor de A agora e: %d\n",A);
    printf("O valor de B agora e: %d\n",B);



    return 0;
}