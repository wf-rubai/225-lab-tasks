#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;
    char **a = new char*[n];
    int *c = new int[n];

    for(int i=0; i<n; i++){
        cout << "Size of column " << i << " : ";
        cin >> c[i];
    }

    for(int i=0; i<n; i++){
        a[i] = new char[c[i]];
    }

    cout << endl;
    for(int i=0; i<n; i++){
        cout << "String " << i << " : ";
        for(int j=0; j<c[i]; j++){
            cin >> a[i][j];
        }
    }

    cout << endl << "Strings : " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<c[i]; j++){
            cout << a[i][j];
        }
        cout << " ";
    }

    for(int i=0; i<n; i++){
        delete [] a[i];
    }

    delete [] a;

    return 0;
}