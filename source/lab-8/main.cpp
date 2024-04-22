#include <iostream>
#include "StackType.h"

using namespace std;

int main() {

    string s;
    StackType<char> opt;
    
    cout << "Enter expressions : " ;
    cin >> s;

    for(char c: s){
        
    }

    return 0;
}

bool prior(char a, char b){
    if((a == '+' || a == '-') && (b == '+' || b == '-'))
        return true;
    else if((a == '+' || a == '-') && (b == '*' || b == '/'))
        return false;
    else if((a == '*' || a == '/') && (b == '+' || b == '-'))
        return false;
    else if((a == '*' || a == '/') && (b == '*' || b == '/'))
        return true;
}