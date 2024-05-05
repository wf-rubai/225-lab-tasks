#include <iostream>

using namespace std;

int pow(int n, int p){
    if(p == 1){
        return n;
    }
    return n * pow(n,p-1);
}

double sum(int n){
    if(n == 0){
        return 1;
    }
    return (1.0/pow(2,n)) + sum(n-1);
}

int main() {

    int n=2;
    double d = sum(n);

    cout << d << endl;

    return 0;
}
