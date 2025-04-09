#include <bits/stdc++.h>
using namespace std;

int main(){

    double matriz[12][12];

    int a;
    char b;
    cin >> a;
    cin >> b; 
    double temp = 0;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){

            cin >> matriz[i][j];

        }
    }

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){

            if(i == a){
                temp += matriz[i][j];
            }

        }
    }

    if(b == 'M'){
        printf("%.1lf\n", temp/12.0);
    }else{
        printf("%.1lf\n", temp);
    }

    return 0;
}