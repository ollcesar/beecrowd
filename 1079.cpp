#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    double num1, num2, num3;
    cin >> a;
    
    for(int i = 0; i < a; i++){

        cin >> num1;
        cin >> num2;
        cin >> num3;

        double media = ((num1*2)+(num2*3)+(num3*5))/(2+3+5);
    
        printf("%.1lf\n", media);
    }

    return 0;

}