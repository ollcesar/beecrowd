#include <stdio.h>

int main(){

    int segundos, resto, horas, minutos;

    scanf("%d", &segundos);

    horas = segundos / 3600;

    resto = segundos % 3600;

    minutos = resto / 60;

    resto = segundos % 60;

    segundos = resto;

    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;

}