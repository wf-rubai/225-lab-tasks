#ifndef DYNARR_H
#define DYNARR_H

#pragma once

template <class t>
class dynArr
{
    public:
        dynArr();
        dynArr(int s);
        void setValue(int i, t v);
        t getValue(int v);
        void allocate(int s);
        ~dynArr();

    private:
        t *arr;
        int size;

};

#endif