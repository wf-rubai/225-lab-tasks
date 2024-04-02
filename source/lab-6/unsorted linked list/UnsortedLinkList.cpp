#include <iostream>

#include "UnsortedLinkList.h"

using namespace std;

template <class ItemType>
UnsortedLinkList<ItemType>::UnsortedLinkList()
{
    head = NULL;
    length = 0;
    currentPos = NULL;
}

template <class ItemType>
UnsortedLinkList<ItemType>::~UnsortedLinkList()
{
    MakeEmpty();
}

template <class ItemType>
bool UnsortedLinkList<ItemType>::IsFull()
{
    try
    {
        Node *temp = new Node;
        delete temp;
        return false;
    }
    catch (bad_alloc &exception)
    {
        return true;
    }
}

template <class ItemType>
int UnsortedLinkList<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void UnsortedLinkList<ItemType>::MakeEmpty()
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    length = 0;
}

template <class ItemType>
void UnsortedLinkList<ItemType>::RetrieveItem(ItemType &item, bool &found)
{
    Node *temp = head;
    found = false;
    while (temp->next != NULL && !found)
    {
        if (temp->info == item)
        {
            found = true;
            break;
        }
        temp = temp->next;
    }
}

template <class ItemType>
void UnsortedLinkList<ItemType>::InsertItem(ItemType item)
{
    Node *temp = new Node;
    temp->info = item;
    temp->next = head;
    head = temp;

    length++;
}

template <class ItemType>
void UnsortedLinkList<ItemType>::DeleteItem(ItemType item)
{
}

template <class ItemType>
void UnsortedLinkList<ItemType>::ResetList()
{
}

template <class ItemType>
void UnsortedLinkList<ItemType>::GetNextItem(ItemType &item)
{
    if (currentPos == NULL)
        currentPos = head;
    else if(currentPos->next != NULL)
        currentPos = currentPos->next;
    item = currentPos->info;
}

template <class ItemType>
void UnsortedLinkList<ItemType>::PrintList()
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->info << ", ";
        temp = temp->next;
    }
    cout << temp->info << ", ";
}
