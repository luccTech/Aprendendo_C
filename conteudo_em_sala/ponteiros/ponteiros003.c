/*
istituto:                IFBA               Data: 22/08/2023
Aluno: Lucas Barbosa Barreto                Turma: 2º INF-B
Disciplina: Algoritimos            Professora: Stefani Pires
Tema: Ponteiros/ relembrando fução. */


//                         Atividade: 
/*1° faça um programa utilizando ponteiros para inverter os conteudos dos ponteiros.*/
#include <stdio.h>

void incrementar_3(int *x,int *y){
    int g; //variavel para guardar valor de x temporariamente.
    g = *x;
    *x = *y;
    *y = g;
    printf("\nDentro da funcao:\t x=%d y=%d",*x , *y);
}
int main(void){
    int x = 10, y =2;
    printf("\nAntes da funcao:\t x=%d y=%d",x , y);
    incrementar_3(&x,&y); //incrementar(10,2)
    printf("\nDepois da funcao:\t x=%d y=%d",x , y);

    return 0;
}