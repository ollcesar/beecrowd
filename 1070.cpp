#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, i;
    cin >> a;

    if((a%2)!=0){
        a = a-1;
    }
    for(i = 0; i < 12; i++){
        
        a++;
        if((a%2)!=0){
            printf("%d\n", a);

        }        
    }
    return 0;

}