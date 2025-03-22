#include <bits/stdc++.h>
using namespace std;

int main(){

    int i;
    int a, b = 0;
    int constante = 0;

    for(i = 1; i <= 100; i++){

        cin >> a;

        if(a > constante){
            constante = a;
            b = i;
        }


    }

    cout << constante << endl << b << endl;

    return 0;

}