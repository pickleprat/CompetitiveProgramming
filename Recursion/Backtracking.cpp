#include <iostream>
using namespace std; 

void backtrackN2one(int i, int n){
    if(i > n){
        return; 
    }

    backtrackN2one(i + 1, n); 
    cout << i << endl; 
}

int main(){
    backtrackN2one(1, 20); 
    return 0; 
}