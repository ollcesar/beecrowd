#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int i = 0, j = 60;

    while(j >= 0){

        printf("I=%d J=%d\n", i + 1, j);
        
        j = j-5;
        i = i+3;
    }

    return 0;
}