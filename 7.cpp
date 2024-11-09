#include <iostream>
#include <list>
using namespace std;

void reverseNum(list<int>& nums)
{
    list<int>::iterator it = nums.begin();
    while (it != nums.end())
    {
        nums.insert(it, -(*it));
        ++it;
    }
}
