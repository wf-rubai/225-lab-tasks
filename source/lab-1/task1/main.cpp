#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;
    int *a = new int[n];

    for(int i=0; i<n ; i++){
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl;

    for(int i=0; i<n ; i++){
        cout << "Input a[" << i << "] : ";
        cout << a[i] << endl;
    }

    delete [] a;

    return 0;
}