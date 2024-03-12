#include <iostream>

#include "dynArr.h"

using namespace std;

dynArr::dynArr()
{
    arr = NULL;
    row = 0;
    col = 0;
}

dynArr::~dynArr()
{
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete [] arr;
}

dynArr::dynArr(int r, int c)
{
    row = r;
    col = c;

    arr = new int*[r];
    for(int i=0; i<r; i++){
        arr[i] = new int[c];
    }
}

void dynArr::setValue(int r, int c, int v)
{
    arr[r][c] = v;
}

int dynArr::getValue(int r, int c)
{
    return arr[r][c];
}

void dynArr::allocate(int r, int c)
{
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete [] arr;
    
    row = r;
    col = c;

    arr = new int*[r];
    for(int i=0; i<r; i++){
        arr[i] = new int[c];
    }
}
