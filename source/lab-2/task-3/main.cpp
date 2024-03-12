#include <iostream>

#include"dynArr.cpp"

using namespace std;

int main() {

    dynArr a(3,4);
    a.allocate(4,4);

    a.setValue(3,3,4);

    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            cout << a.getValue(i, j) << endl;

    return 0;
}