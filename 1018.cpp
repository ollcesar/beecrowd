#include <stdio.h>
int main(){

    int numero, resto, notasCem, notasCinq, notasVinte, notasDez, notasCinco, notasDois, notasUm;

    scanf("%d", &numero);

    printf("%d\n", numero);

    notasCem = numero/100;
    printf("%d nota(s) de R$ 100,00\n", notasCem);
    
    resto = numero % 100;
    notasCinq = resto/50;
    printf("%d nota(s) de R$ 50,00\n", notasCinq);

    resto %= 50;
    notasVinte = resto/20;
    printf("%d nota(s) de R$ 20,00\n", notasVinte);

    resto %= 20;
    notasDez = resto/10;
    printf("%d nota(s) de R$ 10,00\n", notasDez);

    resto %= 10;
    notasCinco = resto/5;
    printf("%d nota(s) de R$ 5,00\n", notasCinco);
    
    resto %= 5;
    notasDois = resto/2;
    printf("%d nota(s) de R$ 2,00\n", notasDois);
    
    resto %= 2;
    notasUm = resto/1;
    printf("%d nota(s) de R$ 1,00\n", notasUm);

    return 0;
}
