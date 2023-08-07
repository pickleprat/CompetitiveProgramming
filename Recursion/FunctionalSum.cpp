#include <iostream>
using namespace std; 

int sum(int n){
    if(n == 0){
        return 0; 
    }

    return sum(n - 1) + n; 
}

int main(){
    int n; 
    cout << "Enter a number n = "; 
    cin >> n; 
    cout << "Sum of n integers = " << sum(n);  
    return 0; 
}