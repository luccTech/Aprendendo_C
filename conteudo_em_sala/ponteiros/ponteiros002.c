/*
istituto:                IFBA               Data: 22/08/2023
Aluno: Lucas Barbosa Barreto                Turma: 2º INF-B
Disciplina: Algoritimos            Professora: Stefani Pires
Tema: Ponteiros/ relembrando fução. */

#include <stdio.h>
//Passagem de parametros por valor
void incrementar(int x,int y){
    x = x+1;
    y = y+1;
    printf("\nDentro da funcao: x=%d y=%d",x , y);
}
// Primeiro, declaramos a fução de forma diferente
void incrementar_2(int *x,int *y){
    *x = *x+1;
    *y = *y+1;
    printf("\nDentro da funcao:\t x=%d y=%d",*x , *y);
}
int main(void){
    int x = 10, y =2;
    printf("\nAntes da funcao:\t x=%d y=%d",x , y);
    incrementar_2(&x,&y); //incrementar(10,2)
    printf("\nDepois da funcao:\t x=%d y=%d",x , y);

    return 0;
}