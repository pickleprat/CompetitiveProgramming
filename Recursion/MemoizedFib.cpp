#include <iostream>
using namespace std; 

int fibmemoized(int n, int memory[]){
    if(n <= 1 || memory[n] != 0){
        return memory[n]; 
    }
    int fibn = fibmemoized(n - 1, memory) + fibmemoized(n - 2, memory); 
    memory[n] = fibn; 
    return fibn; 
}

void display(int arr[], int size){
    cout << "[ "; 
    for(int i = 0; i < size; i ++){
        cout << arr[i] << " "; 
    }
    cout << " ]" << endl; 
    return; 
}

int main(){
    int n; 
    cout << "Enter the value of n = "; 
    cin >> n; 
    int arr[n+1] = {0}; 
    arr[1] = 1; 
    int fibn = fibmemoized(n, arr); 
    cout << "The memoized fib = " << fibn; 
    return 0; 
}