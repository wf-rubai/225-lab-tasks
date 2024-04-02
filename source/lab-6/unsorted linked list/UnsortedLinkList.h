#ifndef UnsortedLinkList_H
#define UnsortedLinkList_H

#pragma once

template <class ItemType>
class UnsortedLinkList
{
    struct Node
    {
        ItemType info;
        Node * next;
    };
    

    public:
        UnsortedLinkList();
        ~UnsortedLinkList();
        bool IsFull();
        int LengthIs();
        void MakeEmpty();
        void RetrieveItem(ItemType &, bool &);
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void ResetList();
        void GetNextItem(ItemType &);
        void PrintList();

    private:
        Node *head;
        int length;
        Node *currentPos;
};

#endif