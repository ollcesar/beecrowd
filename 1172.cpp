#include <bits/stdtr1c++.h>
using namespace std;

int main(){

    int A[10], i;

    /*for(i = 0; i < 10; i++){
        cin >> A[i];
*/
    for(i = 0; i<10; i++){

        cin >> A[i];
        if(A[i]<=0){
            A[i] = 1;

        }

        cout << "X[" << i << "] = " << A[i] << endl;

    }

        return 0;

}