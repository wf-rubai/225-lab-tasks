#include "quetype.h"

template <class ItemType>
quetype<ItemType>::quetype(int max)
{
    maxQue = max + 1;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template <class ItemType>
quetype<ItemType>::quetype()
{
    maxQue = 501;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template <class ItemType>
quetype<ItemType>::~quetype()
{
    delete[] items;
}

template <class ItemType>
void quetype<ItemType>::MakeEmpty()
{
    front = maxQue - 1;
    rear = maxQue - 1;
}

template <class ItemType>
bool quetype<ItemType>::IsEmpty()
{
    return (rear == front);
}

template <class ItemType>
bool quetype<ItemType>::IsFull()
{
    return ((rear + 1) % maxQue == front);
}

template <class ItemType>
void quetype<ItemType>::Enqueue(ItemType newItem)
{
    if (IsFull())
        throw FullQueue();
    else
    {
        rear = (rear + 1) % maxQue;
        items[rear] = newItem;
    }
}

template <class ItemType>
void quetype<ItemType>::Dequeue(ItemType &item)
{
    if (IsEmpty())
        throw EmptyQueue();
    else
    {
        front = (front + 1) % maxQue;
        item = items[front];
    }
}
