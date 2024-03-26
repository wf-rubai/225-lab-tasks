#ifndef LINKLIST_H
#define LINKLIST_H

#pragma once

template <class ItemType>
class LinkList
{
    struct Node
    {
        ItemType info;
        Node * next;
    };
    

    public:
        LinkList();
        ~LinkList();
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