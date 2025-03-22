#include <bits/stdc++.h>
using namespace std;
int main(){

    int a = 0, b=0, c=0, d=0, i, numero;

    for(i = 0; i < 5; i++){
        cout << "";
        cin >> numero;
        
        //par
        if((numero%2)==0){
            a++;
        }

        //impar
        else{
            b++;
        }

        //positivo
        if(numero > 0){
            c++;
        }

        //negativo
        else if(numero < 0){
            d++;
        }

    }
    printf("%d valor(es) par(es)\n", a);
    printf("%d valor(es) impar(es)\n", b);
    printf("%d valor(es) positivo(s)\n", c);
    printf("%d valor(es) negativo(s)\n", d);

    return 0;
}