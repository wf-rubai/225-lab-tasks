#ifndef SortedLinkList_H
#define SortedLinkList_H

#pragma once

template <class ItemType>
class SortedLinkList
{
    struct Node
    {
        ItemType info;
        Node * next;
    };
    

    public:
        SortedLinkList();
        ~SortedLinkList();
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