#ifndef PQTYPE_H
#define PQTYPE_H

#pragma once
#include "HeapType.h"
#include "HeapType.cpp"

class FullPQ
{
};
class EmptyPQ
{
};

template <class ItemType>
class PQType
{
    public:
        PQType(int);
        ~PQType();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void Enqueue(ItemType);
        void Dequeue(ItemType &);

    private:
        int length;
        HeapType<ItemType> items;
        int maxItems;
};

#endif