#include <iostream>

#include "dynArr.cpp"

using namespace std;

int main() {

    dynArr<char> arr2(5);

    char c;
    cout << "Enter 5 chars: ";
    for(int i=0; i<5; i++){
        cin >> c;
        arr2.setValue(i, c);
    }

    for(int i=0; i<5; i++)
        cout << arr2.getValue(i) << ", ";

    cout << endl;

    return 0;
}