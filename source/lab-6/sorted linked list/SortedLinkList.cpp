#include <iostream>

#include "SortedLinkList.h"

using namespace std;

template <class ItemType>
SortedLinkList<ItemType>::SortedLinkList()
{
    
}

template <class ItemType>
SortedLinkList<ItemType>::~SortedLinkList()
{
    MakeEmpty();
}

template <class ItemType>
bool SortedLinkList<ItemType>::IsFull()
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
int SortedLinkList<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void SortedLinkList<ItemType>::MakeEmpty()
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
void SortedLinkList<ItemType>::RetrieveItem(ItemType &item, bool &found)
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
void SortedLinkList<ItemType>::InsertItem(ItemType item)
{
    Node *newNode;
    Node *predLoc;
    Node *location;
    bool moreToSearch;
    location = head;
    predLoc = NULL;
    moreToSearch = (location != NULL);
    while (moreToSearch)
    {
        if (location->info > item)
        {
            predLoc = location;
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else
            moreToSearch = false;
    }
    newNode = new Node;
    newNode->info = item;
    if (predLoc == NULL)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        newNode->next = location;
        predLoc->next = newNode;
    }
    length++;
}

template <class ItemType>
void SortedLinkList<ItemType>::DeleteItem(ItemType item)
{
}

template <class ItemType>
void SortedLinkList<ItemType>::ResetList()
{
}

template <class ItemType>
void SortedLinkList<ItemType>::GetNextItem(ItemType &item)
{
    if (currentPos == NULL)
        currentPos = head;
    else if (currentPos->next != NULL)
        currentPos = currentPos->next;
    item = currentPos->info;
}

template <class ItemType>
void SortedLinkList<ItemType>::PrintList()
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->info << ", ";
        temp = temp->next;
    }
    cout << temp->info << ", ";
}
