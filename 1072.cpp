#include <bits/stdc++.h>
using namespace std;

int main(){

    int i, b;
    int out = 0, in = 0;
    cin >> i;

    for(int a = 0; a < i; a++){

        cin >> b;
        if(b >= 10 && b <= 20){
            in ++;
        }else{
            out++;
        }

    }

        cout << in << " in\n";
        cout << out << " out\n";

        return 0;
}