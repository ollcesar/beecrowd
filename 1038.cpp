#include <stdio.h>

int main(){

    double cachorroQuente = 4.00;
    double xSalada = 4.50;
    double xBacon = 5.00;
    double torradaSimples = 2.00;
    double refrigerante = 1.50;
    double valor;

    int a, b;

    scanf("%d %d", &a, &b);

    if (a == 1){
        valor = cachorroQuente;
        printf("TOTAL: R$ %.2lf\n", valor * b);
    }else if (a == 2){
        valor = xSalada;
        printf("TOTAL: R$ %.2lf\n", valor * b);
    }else if (a == 3){
        valor = xBacon;
        printf("TOTAL: R$ %.2lf\n", valor * b);
    }else if (a == 4){
        valor = torradaSimples;
        printf("TOTAL: R$ %.2lf\n", valor * b);
    }else if (a == 5){
        valor = refrigerante;
        printf("TOTAL: R$ %.2lf\n", valor * b);
    }

    return 0;

}