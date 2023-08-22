/*
istituto:                IFBA               Data: 22/08/2023
Aluno: Lucas Barbosa Barreto                Turma: 2º INF-B
Disciplina: Algoritimos            Professora: Stefani Pires
Tema: Ponteiros/ relembrando fução. */

#include <stdio.h>

void incrementar(int x,int y){
    x = x+1;
    y = y+1;
}

int main(void){
    int x = 10, y =2;
    printf("\nAntes da funcao: x=%d y=%d",x , y);
    incrementar(x,y); //incrementar(10,2)
    printf("\nDepois da funcao: x=%d y=%d",x , y);





    return 0;
}