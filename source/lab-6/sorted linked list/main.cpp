#include <iostream>

#include "SortedLinkList.cpp"

using namespace std;

int main() {

    SortedLinkList<int> list1;
    SortedLinkList<int> list2;
    SortedLinkList<int> list3;
    
    int n;
    cout << "Enter m : " ;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        list3.InsertItem(a);
    }

    list3.PrintList();
    return 0;
}