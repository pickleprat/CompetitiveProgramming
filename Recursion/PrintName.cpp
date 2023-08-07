#include <iostream>
#include <string.h>
using namespace std; 

void print(string name, int count, int stopper){
    if(count != stopper){
        count += 1; 
        cout << name << endl; 
        print(name ,count, stopper); 
    }
}

int main(){
    print("Pratyush", 0, 6); 
}