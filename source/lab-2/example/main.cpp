#include <iostream>

#include "dynArr.cpp"

using namespace std;

int main() {

    dynArr arr1;
    dynArr arr2(5);

    arr2.setValue(1, 1);
    arr2.setValue(3, 4);

    for(int i=0; i<5; i++)
        cout << arr2.getValue(i) << endl;

    cout << endl;

    arr2.allocate(7);

    for(int i=0; i<7; i++)
        cout << arr2.getValue(i) << endl;

    return 0;
}