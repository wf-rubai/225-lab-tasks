#include <iostream>
#include "QueType.cpp"

using namespace std;

int main() {

    QueType<int> qt;

    qt.Enqueue(5);
    qt.Enqueue(2);
    qt.Enqueue(4);
    qt.Enqueue(1);
    qt.Enqueue(6);

    int n;
    for(int i=0; i<5; i++){
        qt.Dequeue(n);
        cout << n << ", ";
    }
    
    return 0;
}