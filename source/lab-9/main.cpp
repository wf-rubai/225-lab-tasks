#include <iostream>
#include "quetype.cpp"

using namespace std;

int main() {

    quetype<int> qt(5);
    quetype<int> qt_temp(5);
    int n;

    if(qt.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    qt.Enqueue(5);
    qt.Enqueue(7);
    qt.Enqueue(4);
    qt.Enqueue(2);
    if(qt.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    if(qt.IsFull())
        cout << "Queue is full" << endl;
    else
        cout << "Queue is not full" << endl;

    qt.Enqueue(6);
    while(!qt.IsEmpty()){
        qt.Dequeue(n);
        qt_temp.Enqueue(n);
        cout << n << " ";
    }
    cout << endl;
    while(!qt_temp.IsEmpty()){
        qt_temp.Dequeue(n);
        qt.Enqueue(n);
    }

    if(qt.IsFull())
        cout << "Queue is full" << endl;
    else
        cout << "Queue is not full" << endl;

    try{
        qt.Enqueue(8);
    }catch(FullQueue){
        cout << "Queue Overflow" << endl;
    }

    qt.Dequeue(n);
    qt.Dequeue(n);
    while(!qt.IsEmpty()){
        qt.Dequeue(n);
        qt_temp.Enqueue(n);
        cout << n << " ";
    }
    cout << endl;
    while(!qt_temp.IsEmpty()){
        int n;
        qt_temp.Dequeue(n);
        qt.Enqueue(n);
    }

    qt.Dequeue(n);
    qt.Dequeue(n);
    qt.Dequeue(n);
    if(qt.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;
    
    try{
        qt.Dequeue(n);
    }
    catch(EmptyQueue){
        cout << "Queue Underflow" << endl;
    }

    cout << "Enter size : " ;
    cin >> n;
    quetype<string> bin(n);
    string s = "1";

    for(int i=0; i<n; i++){
        if(!bin.IsEmpty()){
            bin.Dequeue(s);
        }
        cout << s << endl;

        if(!bin.IsFull())
            bin.Enqueue(s + "0");
        if(!bin.IsFull())
            bin.Enqueue(s + "1");
    }
    
    return 0;
}