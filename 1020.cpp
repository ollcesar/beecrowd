#include <stdio.h>

int main(){

    int dias, ano, mes, resto;
    scanf("%d", &dias);

    ano = dias / 365;
    resto = dias % 365;

    mes = resto / 30;
    dias = resto % 30;

    printf("%dano(s)\n %dmes(es)\n %ddia(s)\n", ano, mes, dias);

}