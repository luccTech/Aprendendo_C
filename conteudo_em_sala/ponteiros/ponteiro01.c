#include <stdio.h>

int main(void){
    int x = 10;
    int *y = &x;

    printf("o valor de X e: %d", x);
    printf("\no endereco de X e: %p", &x);
    printf("\n o endereco de y e: %p", y);
    printf("\no conteudo de y e: %d", *y);

    *y = 20;
    printf("\no conteudo de x e: %d", x);
    printf("\no conteudo de x e: %d",*y);






    return 0;
}