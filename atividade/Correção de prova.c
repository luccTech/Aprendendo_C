#include <stdio.h>
void func(int a,int b){
    int c;
    c = a; a= b; b = c;
}

int main(){
int x =5, y=10;
func(&x,&y);
printf("x = %d y = %d", x,y);
}

