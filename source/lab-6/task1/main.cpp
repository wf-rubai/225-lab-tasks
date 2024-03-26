#include <iostream>

using namespace std;

#include "LinkList.cpp"

int main() {

    LinkList<int> list;

    list.InsertItem(5);
    list.InsertItem(3);
    list.InsertItem(32);
    list.InsertItem(6);
    list.InsertItem(118);

    list.PrintList();
    return 0;
}