#ifndef QUETYPE_H
#define QUETYPE_H

#pragma once

template <class ItemType>
class QueType
{
    struct NodeType
    {
        ItemType info;
        NodeType *next;
    };

    public:
        QueType();
        ~QueType();
        void MakeEmpty();
        void Enqueue(ItemType);
        void Dequeue(ItemType &);
        bool IsEmpty();
        bool IsFull();

    private:
        NodeType *head, *tail;
};

#endif