#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, i, j;
    cin >> a;

    for(i = 0; i < a; i++){

        cin >> j;

        if (j == 0){
            printf("NULL\n");


        }else{
            if (j%2 == 0){
                printf("EVEN ");
            }else{
                printf("ODD ");
            }
        }

        if (j < 0){
            printf("NEGATIVE\n");
        }else if(j > 0){
            printf("POSITIVE\n");
        }
    }

    return 0;

}