#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> meuVetor;
    int valorDoVetor, i = 0;
    
    while(i<20){
        
        cin >> valorDoVetor;
        
        meuVetor.push_back(valorDoVetor);
        
        i++;
    }
    
    reverse(meuVetor.begin(), meuVetor.end());

    for(i = 0; i < 20; i++){
        
        cout << "N[" << i << "] = " << meuVetor[i] << endl;
    }
    
    return 0;
}