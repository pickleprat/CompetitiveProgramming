#include <iostream>
using namespace std; 

void swap(int* p, int* q){
    int c = *p; 
    *p = *q; 
    *q = c; 
    return; 
}

void reverse(int i, int size, int arr[]){
    if(i > size/2){
        return; 
    }
    reverse(i+1, size, arr); 
    swap(arr[i], arr[size - i - 1]); 
    

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
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    display(arr, 6); 
    reverse(0, 6, arr); 
    display(arr, 6); 
}