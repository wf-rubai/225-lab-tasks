#include <iostream>

using namespace std;

int main() {

    int n, m;
    cout << "Enter n , m : ";
    cin >> n >> m;
    char **a = new char*[n];

    for(int i=0; i<n; i++){
        a[i] = new char[m];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    cout << endl << "Strings : " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        delete [] a[i];
    }

    delete [] a;

    return 0;
}