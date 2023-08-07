#include <iostream>
using namespace std; 

void printOne2N(int current, int N){
    if(current == N+1){
        return; 
    }else{
        cout << current << endl; 
        printOne2N(current+1, N); 
    }
}

int main(){
    printOne2N(1, 10); 
    return 0; 
}