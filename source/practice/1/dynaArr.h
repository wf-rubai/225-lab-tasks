#ifndef DYNAARR_H
#define DYNAARR_H

#pragma once

template<class t>
class dynaArr
{
    public:
        dynaArr();
        dynaArr(int r, int c);
        void setValue(int r, int c, t v);
        t getValue(int r, int c);
        ~dynaArr();

    private:
        int row;
        int col;
        t **data;
};

#endif