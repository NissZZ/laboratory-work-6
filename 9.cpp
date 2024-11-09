#include <iostream>
#include <list>
using namespace std;

void Sort(list<int>& nums)
{
    list<int>::iterator it = nums.begin();
    list<int>::iterator it2 = nums.begin();
    int k = 0;
    for (it; it != nums.end(); ++it)
    {
        for (it2; it2 != nums.end(); ++it2)
        {
            if (*it > *it2)
            {
                swap(*it, *it2);
            }
        }
        it2 = nums.begin();
    }
}
