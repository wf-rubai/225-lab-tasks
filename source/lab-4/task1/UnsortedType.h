#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

#pragma once

const int MAX_ITEMS = 5;

template<class t>
class UnsortedType
{
    public:
        UnsortedType();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        void InsertItem(t);
        void DeleteItem(t);
        void RetrieveItem(t &, bool &);
        void ResetList();
        void GetNextItem(t &);

    private:
        int length;
        t info[MAX_ITEMS];
        int currentPos;
};

#endif