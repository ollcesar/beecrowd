#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int a = 0, i;
    int numero;
    
    for (i=0; i<5; i++){
        
        cin >> numero;
        if(numero%2 == 0){
            a++;
        }
    }
    printf("%d valores pares\n", a);
    
    return 0;
}