#include <bits/stdc++.h>
using namespace std;

int main(){
    
    
    int A[1000], i, j;
    
    cin >> j;
    
    for(i = 0; i <1000; i++){
        
        A[i] = i % j;
        /*
        3/3 = 0
        3/2 = 1
        3/1 = 2
        */

        cout << "N[" << i <<"] = " << A[i] << endl;
    }
    
    
    
    
    return 0;
}