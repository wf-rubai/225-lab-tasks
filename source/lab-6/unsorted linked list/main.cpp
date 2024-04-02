#include <iostream>

#include "UnsortedLinkList.cpp"

using namespace std;

int main() {

    UnsortedLinkList<int> list1;
    UnsortedLinkList<int> list2;
    UnsortedLinkList<int> list3;
    
    int n;
    cout << "Enter m : " ;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        list1.InsertItem(a);
    }
    cout << "Enter n : " ;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        list2.InsertItem(a);
    }

    // list1.InsertItem(1);
    // list1.InsertItem(2);
    // list1.InsertItem(3);
    // list2.InsertItem(4);
    // list2.InsertItem(5);
    // list2.InsertItem(6);

    int n1;
    list1.GetNextItem(n1);
    int n2;
    list2.GetNextItem(n2);
    int l1 = list1.LengthIs();
    int l2 = list2.LengthIs();
    int count1=0, count2=0;
    while(count1<l1 || count2<l2){
        if((n1>n2 || count2==l2) && count1<l1){
            list3.InsertItem(n1);
            list1.GetNextItem(n1);
            count1++;
        }else if((n1<n2 || count1==l1) && count2<l2){
            list3.InsertItem(n2);
            list2.GetNextItem(n2);
            count2++;
        }
    }

    list3.PrintList();
    return 0;
}