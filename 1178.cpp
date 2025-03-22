#include <bits/stdc++.h>
using namespace std;

int main(){
    
    double N[100], a;
    
    cin >> a;
    
    for (int i = 0; i < 100; i++){
        
        N[i] = a;
        a = a/2;
        
        //cout << "N[" << i << "] = " << N[i] << endl;
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
    
    
    return 0;
}