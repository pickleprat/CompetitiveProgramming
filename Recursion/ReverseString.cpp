#include <iostream>
#include <string> 

using namespace std; 

bool ispalindrome(string str, int chIndex, int strlen){
    char initChar = str[chIndex]; 
    char endChar = str[strlen - chIndex - 1]; 
    if(initChar != endChar ){
        return false; 
    }else if(chIndex > strlen/2){
        return true; 
    }
    return ispalindrome(str, chIndex+1, strlen); 
}

int main(){
    string m = "anamana";
    int palindromity = ispalindrome(m, 0, 7); 
    if(palindromity){
        cout << m + " is a palindrome"; 
    }else{
        cout << m + " is not a palindrome"; 
    }
    return 0; 
}