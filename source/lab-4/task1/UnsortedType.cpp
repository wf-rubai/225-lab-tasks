#include "UnsortedType.h"

template<class t>
UnsortedType<t>::UnsortedType()
{
    length = 0;
    currentPos = -1;
}

template<class t>
void UnsortedType<t>::MakeEmpty()
{
    length = 0;
    currentPos = -1;
}

template<class t>
bool UnsortedType<t>::IsFull()
{
    if(length == MAX_ITEMS)
        return true;
    else    
        return false;
}

template<class t>
int UnsortedType<t>::LengthIs()
{
    return length;
}

template<class t>
void UnsortedType<t>::InsertItem(t i)
{
    info[length] = i;
    length++;
}

template<class t>
void UnsortedType<t>::DeleteItem(t ip)
{
    for(int i=0; i<length; i++){
        if(info[i] == ip){
            info[i] = info[length-1];
            length--;
        }
    }
}

template<class t>
void UnsortedType<t>::RetrieveItem(t & ip, bool & found)
{
    found = false;
    for(int i=0; i<length; i++){
        if(info[i] == ip){
            found = true;
            break;
        }
    }
}

template<class t>
void UnsortedType<t>::ResetList()
{
    currentPos = -1;
}

template<class t>
void UnsortedType<t>::GetNextItem(t & ip)
{
    currentPos++;
    ip = info[currentPos];
}
