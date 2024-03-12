#include "dynArr.h"

dynArr::dynArr()
{
    arr = NULL;
    size = 0;
}

dynArr::dynArr(int s)
{
    size = s;
    arr = new int[s];
}

void dynArr::setValue(int i, int v)
{
    arr[i] = v;
}

int dynArr::getValue(int i)
{
    return arr[i];
}

void dynArr::allocate(int s)
{
    int *a = new int[s];
    for(int i=0; i<size; i++)
        a[i] = arr[i];

    delete [] arr;
    arr = a;
    size = s;

    // delete [] arr;
    // arr = new int[s];
}

dynArr::~dynArr()
{
    delete [] arr;
}