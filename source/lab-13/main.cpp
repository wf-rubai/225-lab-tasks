#include <iostream>
#include "TreeType.cpp"

using namespace std;

int main() {

    // QueType<int> qy;

    TreeType<int> tree;
    if(tree.IsEmpty()){
        cout << "Tree is empty" << endl;
    }else{
        cout << "Tree is not empty" << endl;
    }

    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    if(tree.IsEmpty()){
        cout << "Tree is empty" << endl;
    }else{
        cout << "Tree is not empty" << endl;
    }

    cout << "Tree height is : " << tree.LengthIs() << endl;

    int n = 9;
    bool found;
    tree.RetrieveItem(n, found);
    if(found){
        cout << "item is found" << endl;
    }else{
        cout << "item is not found" << endl;
    }
    n = 13;
    tree.RetrieveItem(n, found);
    if(found){
        cout << "item is found" << endl;
    }else{
        cout << "item is not found" << endl;
    }

    tree.ResetTree(IN_ORDER);
    found = false;
    while(!found){
        tree.GetNextItem(n, IN_ORDER, found);
        cout << n << ", " ;
    }
    cout << endl;

    tree.ResetTree(PRE_ORDER);
    found = false;
    while(!found){
        tree.GetNextItem(n, PRE_ORDER, found);
        cout << n << ", " ;
    }
    cout << endl;

    tree.ResetTree(POST_ORDER);
    found = false;
    while(!found){
        tree.GetNextItem(n, POST_ORDER, found);
        cout << n << ", " ;
    }
    cout << endl;

    return 0;
}
