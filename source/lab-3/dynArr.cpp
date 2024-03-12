#include <iostream>

#include "dynArr.h"

using namespace std;

template <class t>
dynArr<t>::dynArr()
{
    arr = NULL;
    size = 0;
}

template <class t>
dynArr<t>::dynArr(int s)
{
    size = s;
    arr = new t[s];
}

template <class t>
void dynArr<t>::setValue(int i, t v)
{
    arr[i] = v;
}

template <class t>
t dynArr<t>::getValue(int i)
{
    return arr[i];
}

template <class t>
void dynArr<t>::allocate(int s)
{
    t *a = new t[s];
    for(int i=0; i<size; i++)
        a[i] = arr[i];

    delete [] arr;
    arr = a;
    size = s;
}

template <class t>
dynArr<t>::~dynArr()
{
    delete [] arr;
}