#include <iostream>

using namespace std;

#include "LinkList.h"

template <class ItemType>
LinkList<ItemType>::LinkList()
{
    head = NULL;
    length = 0;
}

template <class ItemType>
LinkList<ItemType>::~LinkList()
{
    delete head;
}

template <class ItemType>
bool LinkList<ItemType>::IsFull()
{
    try{
        Node* temp = new Node;
        delete temp;
        return false;
    }catch(bad_alloc& exception){
        return true;
    }
}

template <class ItemType>
int LinkList<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void LinkList<ItemType>::MakeEmpty()
{
    Node * temp;
    while(head != NULL){
        temp = head;
        head = temp->next;
        delete temp;
    }
    length = 0;
}

template <class ItemType>
void LinkList<ItemType>::RetrieveItem(ItemType & item, bool & found)
{
    Node * temp = head;
    found = false;
    while(temp->next != NULL && !found){
        if(temp->info == item){
            found = true;
            item = temp->info;
            
        }
        temp = temp->next;
    }
}

template <class ItemType>
void LinkList<ItemType>::InsertItem(ItemType item)
{
    Node * temp;
    temp->info = item;
    temp->next = head;
    head = temp;
}

template <class ItemType>
void LinkList<ItemType>::DeleteItem(ItemType item)
{
}

template <class ItemType>
void LinkList<ItemType>::ResetList()
{
}

template <class ItemType>
void LinkList<ItemType>::GetNextItem(ItemType & item)
{
}

template <class ItemType>
void LinkList<ItemType>::PrintList()
{
    Node * temp = head;
    while(temp->next != NULL){
        int i = temp->info;
        cout << i << ", ";
        temp = temp->next;
    }
}
