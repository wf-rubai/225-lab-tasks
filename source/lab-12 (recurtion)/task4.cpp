#include <iostream>

using namespace std;

int min(int a[], int s){
    if(s == 1){
        return a[0];
    }else if(a[s-1] < min(a, s-1)){
        return a[s-1];
    }else{
        return min(a, s-1);
    }
}

int main() {

    int a[] = {3,2,5,8,7};
    int n = min(a,5);

    cout << n << endl;

    return 0;
}
