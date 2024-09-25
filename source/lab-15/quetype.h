#ifndef QUETYPE_H
#define QUETYPE_H

#pragma once
class FullQueue{
};
class EmptyQueue{
};

template <class ItemType>
class quetype{
    public:
        quetype();
        quetype(int max);
        ~quetype();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void Enqueue(ItemType);
        void Dequeue(ItemType &);

    private:
        int front;
        int rear;
        ItemType *items;
        int maxQue;
};

#endif
