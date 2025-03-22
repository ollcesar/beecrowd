#include <bits/stdc++.h>
using namespace std;

int main(){

    int i = 0, a;
    double quantidade, quantCoelho = 0, quantRato = 0, quantSapo = 0, total = 0;
    char tipo;
    cin >> a;

    while(i < a){

        cin >> quantidade >> tipo;

        if(tipo == 'C'){
            quantCoelho = quantCoelho + quantidade;
        }
        if(tipo == 'R'){
            quantRato = quantRato + quantidade;
        }
        if(tipo == 'S'){
            quantSapo = quantSapo + quantidade;
        }

        total = total + quantidade;

        i++;

    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << quantCoelho << endl;
    cout << "Total de ratos: " << quantRato << endl;
    cout << "Total de sapos: " << quantSapo << endl;

    double porcCoelho = quantCoelho * 100 / total;
    double porcRato = quantRato * 100 / total;
    double porcSapo = quantSapo * 100 / total;
    
    printf("Percentual de coelhos: %.2lf %%\n", porcCoelho);
    printf("Percentual de ratos: %.2lf %%\n", porcRato);
    printf("Percentual de sapos: %.2lf %%\n", porcSapo);

    return 0;
}