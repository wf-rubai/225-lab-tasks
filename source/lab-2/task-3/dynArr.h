#ifndef DYNARR_H
#define DYNARR_H

#pragma once

class dynArr
{
    public:
        dynArr();
        dynArr(int r, int c);
        void setValue(int r, int c, int v);
        int getValue(int r, int c);
        void allocate(int r, int c);
        ~dynArr();

    private:
        int **arr;
        int row, col;

};

#endif