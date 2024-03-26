#include <iostream>
#include "UnsortedType.cpp"

using namespace std;

int main() {

    UnsortedType<int> us;
    us.InsertItem(5);
    us.InsertItem(7);
    us.InsertItem(6);
    us.InsertItem(9);

    for(int i=0; i<us.LengthIs(); i++){
        int var;
        us.GetNextItem(var);
        cout << var << ", ";
    }
    cout << endl << us.LengthIs() << endl;

    us.InsertItem(1);
    us.ResetList();
    for(int i=0; i<us.LengthIs(); i++){
        int var;
        us.GetNextItem(var);
        cout << var << ", ";
    }

    bool found;
    int var = 4;
    us.RetrieveItem(var, found);
    if(found)
        cout << endl << "Item is found" ;
    else    
        cout << endl << "Item is not found";

    var = 5;
    us.RetrieveItem(var, found);
    if(found)
        cout << endl << "Item is found" ;
    else    
        cout << endl << "Item is not found";

    var = 9;
    us.RetrieveItem(var, found);
    if(found)
        cout << endl << "Item is found" ;
    else    
        cout << endl << "Item is not found";

    var = 10;
    us.RetrieveItem(var, found);
    if(found)
        cout << endl << "Item is found" ;
    else    
        cout << endl << "Item is not found";

    if(us.IsFull())
        cout << endl << "List is full" ;
    else    
        cout << endl << "List is not full";

    us.DeleteItem(5);
    if(us.IsFull())
        cout << endl << "List is full" ;
    else    
        cout << endl << "List is not full";

    cout <<endl;
    us.ResetList();
    us.DeleteItem(1);
    for(int i=0; i<us.LengthIs(); i++){
        int var;
        us.GetNextItem(var);
        cout << var << ", ";
    }

    cout <<endl;
    us.ResetList();
    us.DeleteItem(6);
    for(int i=0; i<us.LengthIs(); i++){
        int var;
        us.GetNextItem(var);
        cout << var << ", ";
    }

    return 0;
}
