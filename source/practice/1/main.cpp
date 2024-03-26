#include <iostream>
#include "dynaArr.cpp"

using namespace std;

int main() {

    int n;
    cin >> n;

    int **arr = new int*[n];
    int *col = new int[n];

    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        col[i] = m;
    }

    for(int i=0; i<n; i++){
        arr[i] = new int[col[i]];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<col[i]; j++){
            cout << j+1;
        }
        cout << endl;
    }
    

    return 0;
}