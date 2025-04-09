#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin >> a;
    int i, vet[a];
    int menorValor = 1000, numeroVetor;



    for(i = 0; i < a; i++){

        int j;
        cin >> j;
        vet[i]=j;  
        
        if(vet[i]<menorValor){
            menorValor = vet[i];
            numeroVetor = i;
        }
    }

    /*for(i = 0; i < a; i++){

        printf("%d ", vet[i]);

    }*/

    printf("Menor valor: %d\nPosicao: %d\n", menorValor, numeroVetor);

    return 0;
}