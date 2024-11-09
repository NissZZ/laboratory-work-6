#include <iostream>
#include <vector>
using namespace std;


void plusesDeleter(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            v.erase(v.begin() + i);
            --i;
        }
    }
}
