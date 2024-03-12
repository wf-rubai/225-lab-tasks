#include <iostream>

#include "dynArr.cpp"

using namespace std;

int main() {

    dynArr<int> arr1;
    dynArr<char> arr2(5);

    // arr2.setValue(1, 1);
    // arr2.setValue(3, 4);

    char c;
    for(int i=0; i<5; i++){
        cin >> c;
        arr2.setValue(i, c);
    }

    for(int i=0; i<5; i++)
        cout << arr2.getValue(i) << ", ";

    cout << endl;

    arr2.allocate(7);

    for(int i=0; i<7; i++)
        cout << arr2.getValue(i) << ", ";

    return 0;
}