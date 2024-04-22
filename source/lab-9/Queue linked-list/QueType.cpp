#include <iostream>
#include "QueType.h"

using namespace std;

template <class ItemType>
QueType<ItemType>::QueType()
{
    head = NULL;
    tail = NULL;
}

template <class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
}

template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    while(!IsEmpty()){
        NodeType *temp = new NodeType;
        temp = head;
        head = head->next;
        delete temp;
    }
    head = NULL;
    tail = NULL;
}

template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType item)
{
    NodeType *newNode = new NodeType;
    if(!IsFull()){
        newNode->info = item;
        newNode->next = NULL;
        if(IsEmpty()){
            head = newNode;
        }else{
            tail->next = newNode;
        }
        tail = newNode;
    }
}

template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType &item)
{
    if(!IsEmpty()){ 
        NodeType *temp = new NodeType;
        temp = head;
        head = head->next;
        item = temp->info;
        delete temp;
    }
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (head == NULL);
}

template <class ItemType>
bool QueType<ItemType>::IsFull()
{
    NodeType *location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (bad_alloc &exception)
    {
        return true;
    }
}
