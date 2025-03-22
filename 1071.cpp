#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c = 0, i;
    cin >> a;
    cin >> b;

    if (a > b){

        if(b % 2 != 0){
            b = b+1;

        }

        for (i = b; i < a; i++){

            if(i % 2 != 0){
                c = c + i;
            }
    
        }

    }else if (a < b){

        if(a % 2 != 0){
            a = a+1;
        }

        for (i = a; i < b; i++){

            if(i % 2 != 0){
                c = c + i;
            }
    
        }
    }else{
        c = 0;
    }

    printf("%d\n", c);

    return 0;

}