#include <stdio.h>

int main(){

    double horas, velocidade;

    scanf("%lf %lf", &horas, &velocidade);

    printf("%.3lf\n", (horas*velocidade)/12);

    return 0;
}