#include <bits/stdc++.h>
using namespace std;

int main(){

    double matriz[12][12];
    char O; 
    cin >> O;
    double temp = 0; 
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){

            cin >> matriz[i][j];

        }
    }
    for(int i = 0; i < 12; i++){
        for(int j = i + 1; j < 12; j++){

                temp += matriz[i][j];
            
        }
    }

    if(O == 'M'){
        printf("%.1lf\n", temp/66.0);

    }else{
        printf("%.1lf\n", temp);

    }

}