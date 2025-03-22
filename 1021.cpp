#include <stdio.h>

int main(){

    double valor, total;
    int resto, cem, cinquenta, vinte, dez, cinco, dois, um, zeroCinquenta, zeroVinteCinco, zeroDez, zeroCinco, zeroUm;

    scanf("%lf", &valor);

    total = valor * 100.00;
    int centavos = (int)total;

    cem = centavos / 10000;
    resto = centavos % 10000;

    cinquenta = resto / 5000;
    resto = resto % 5000;

    vinte = resto / 2000;
    resto = resto % 2000;

    dez = resto / 1000;
    resto = resto % 1000;

    cinco = resto / 500;
    resto = resto % 500;

    dois = resto / 200;
    resto = resto % 200;

    um = resto / 100;
    resto = resto % 100;

    zeroCinquenta = resto / 50;
    resto = resto % 50;

    zeroVinteCinco = resto / 25;
    resto = resto % 25;
    
    zeroDez = resto / 10;
    resto = resto % 10;

    zeroCinco = resto / 5;
    resto = resto % 5;

    zeroUm = resto / 1;
    resto = resto % 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", zeroCinquenta);
    printf("%d moeda(s) de R$ 0.25\n", zeroVinteCinco);
    printf("%d moeda(s) de R$ 0.10\n", zeroDez);
    printf("%d moeda(s) de R$ 0.05\n", zeroCinco);
    printf("%d moeda(s) de R$ 0.01\n", zeroUm);


    return 0;
}