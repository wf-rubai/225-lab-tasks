#include <iostream>
#include "QueType.cpp"
#include "StackType.cpp"

using namespace std;

int main() {

    QueType<int> qt1;
    QueType<int> qt2;
    StackType<int> st;
    int total = 0;
    for(int i=10; i<100; i+=10){
        qt1.Enqueue(i);
        cout << i << " ";
        total++;
    }
    cout << endl;

    int n = 5;
    // cout << "Enter N: " ;
    // cin >> n;

    int temp;
    for(int i=0; i<total-n; i++){
        qt1.Dequeue(temp);
        qt2.Enqueue(temp);
    }
    while(!qt1.IsEmpty()){
        qt1.Dequeue(temp);
        st.Push(temp);
    }

    while(!qt2.IsEmpty()){
        qt2.Dequeue(temp);
        qt1.Enqueue(temp);
    }
    while(!st.IsEmpty()){
        temp = st.Top();
        st.Pop();
        qt1.Enqueue(temp);
    }


    while(!qt1.IsEmpty()){
        qt1.Dequeue(temp);
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}
