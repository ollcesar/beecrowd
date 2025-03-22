#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int i, a = 0;
    double numero, soma = 0;
    
    for (i = 0; i < 6; i++)
    {
        cout << "";
        cin >> numero;
        if(numero>0){
            a++;
            soma += numero;
        }


    }
    cout << a << " valores positivos\n";
    //cout << soma/a << "\n";
    printf("%.1lf\n", soma/a);
    
    return 0;

}