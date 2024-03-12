#ifndef DYNARR_H
#define DYNARR_H

#pragma once

class dynArr
{
    public:
        dynArr();
        dynArr(int s);
        void setValue(int i, int v);
        int getValue(int v);
        void allocate(int s);
        ~dynArr();

    private:
        int *arr;
        int size;

};

#endif