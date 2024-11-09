#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el)
{
    for(first; first < last; ++first)
    {
        if(*first == el)
        {
            return first;
        }
    }
    return last;
}
