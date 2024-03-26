#include "dynaArr.h"

template<class t>
dynaArr<t>::dynaArr()
{
    row=0;
    col=0;
    data = new t*[row];
    for(int i=0; i<row; i++){
        data[i] = new t[col];
    }
}

template<class t>
dynaArr<t>::dynaArr(int r, int c)
{
    row=r;
    col=c;
    data = new t*[row];
    for(int i=0; i<row; i++){
        data[i] = new t[col];
    }
}

template <class t>
void dynaArr<t>::setValue(int r, int c, t v)
{
    data[r][c] = v;
}

template <class t>
t dynaArr<t>::getValue(int r, int c)
{
    return data[r][c];
}

template <class t>
dynaArr<t>::~dynaArr()
{
    for(int i=0; i<row; i++)
        delete [] data[i];

    delete [] data;
}