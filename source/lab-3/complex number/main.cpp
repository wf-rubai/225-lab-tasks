#include <iostream>

#include "complex.cpp"

using namespace std;

int main() {

    complex c1(1,2);
    complex c2(3,4);
    complex c3;
    
    c3 = c1+c2;
    c3.print();
    
    c3 = c1-c2;
    c3.print();
    
    c3 = c1*c2;
    c3.print();

    if(c1 != c2){
        cout << "they are not equal" << endl;
    }else{
        cout << "they are equal" << endl;
    }

    return 0;
}