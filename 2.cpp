#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el)
{
    if (*first <= el && el <= *last)
    {
        return first += el - *first;
    }
    return last;
}
