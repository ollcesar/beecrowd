#include <bits/stdc++.h>
using namespace std;

int main(){
    int diaInicio, horaInicio, minutoInicio, segundoInicio;
    cin >> diaInicio;
    scanf("%d : %d : %d", &horaInicio, &minutoInicio, &segundoInicio);

    int diaFinal, horaFinal, minutoFinal, segundoFinal;
    cin >> diaFinal;
    scanf("%d : %d : %d", &horaFinal, &minutoFinal, &segundoFinal);

    int totalDia = 24*3600;
    int totalHorasDiaUm = horaInicio * 3600;
    int totalMinutosDiaUm = minutoInicio * 60;
    int segundosDiaUm = totalHorasDiaUm + totalMinutosDiaUm + segundoInicio;
    int segundosTotaisDiaUm = totalDia - segundosDiaUm;

    printf("%d\n", segundosTotaisDiaUm);

}