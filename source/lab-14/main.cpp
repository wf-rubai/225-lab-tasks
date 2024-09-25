#include <iostream>
#include "PQType.cpp"

using namespace std;

int main() {

    int n;
    cout << "Enter the number of bags : ";
    cin >> n;
    PQType<int> bag(n);
    PQType<int> bag_temp(n);

    for(int i=1; i<=n; i++){
        int j;
        cout << "Number of candies in bag " << i << " : " ;
        cin >> j;
        bag.Enqueue(j);
    }

    cout << "Enter the number of minutes : " ;
    cin >> n;

    int count = 0, temp;
    for(int i=1; i<=n; i++){
        bag.Dequeue(temp);
        count += temp;
        bag.Enqueue(temp/2);
    }

    cout << "Max number of candies : " << count << endl;

    return 0;
}
