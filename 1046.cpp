#include <stdio.h>

int main(){

    int a, b, horaDiaUm;

    scanf("%d %d", &a, &b);

    horaDiaUm = 24 - a;
    if(a < b){
        printf("O JOGO DUROU %d HORA(S)\n", b - a);
    }else if(horaDiaUm <= 0){
        horaDiaUm = 0;
        printf("O JOGO DUROU %d HORA(S)\n", horaDiaUm + b);
    }else if(b == 0 && a == 0){
        a = 0;
        b = 24;
        printf("O JOGO DUROU %d HORA(S)\n", a + b); 
    }else{
        printf("O JOGO DUROU %d HORA(S)\n", horaDiaUm + b);    
    }

    
    return 0;
}