#include <stdio.h>

int main(){

    int horaUm, minutoUm, horaDois, minutoDois;
    scanf("%d %d %d %d", &horaUm, &minutoUm, &horaDois, &minutoDois);
    int minutosInicio = (60*horaUm)+minutoUm;

    int minutosFinal = (horaDois*60)+minutoDois;
//////////////////////////////////////////////////////////////////

    if(minutosInicio > minutosFinal){

        minutosInicio = (24*60)-minutosInicio;

        int minutosTotais = minutosInicio+minutosFinal;
        int minutos = minutosTotais % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (minutosTotais/60), minutos);

//////////////////////////////////////////////////////////////////    

    }else if(minutosInicio < minutosFinal){

        int minutosTotais = minutosInicio-minutosFinal;
        int minutos = minutosTotais % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (minutosTotais/60)*(-1), minutos*(-1) );


//////////////////////////////////////////////////////////////////
  
    }else if(minutosInicio == minutosFinal){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    }

    return 0;

}