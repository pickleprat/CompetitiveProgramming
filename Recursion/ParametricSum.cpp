#include <iostream>
using namespace std; 

void sum(int n, int add){
    if(n == 0){
        cout << add << endl; 
    }

    sum(n - 1, add + n); 
}

int main(){
    sum(5, 0); 
    return 0; 
}