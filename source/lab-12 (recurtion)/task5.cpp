#include <iostream>

using namespace std;

int bin(int n){
    if(n == 0){
        return 0;
    }
    return (bin(n/2)*10) + (n%2);
}

int main() {

    int n=16;
    n = bin(n);

    cout << n << endl;

    return 0;
}
