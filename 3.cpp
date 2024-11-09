#include <iostream>
using namespace std;


int wordsCounter(const string& str)
{
    int counter = 0;
    string sign = " ,.";
    string prev;
    prev = str[0];
    for (int i = 1; i < str.length(); i++)
    {
        if (sign.find(prev) == string::npos && sign.find(str[i]) != string::npos)
        {
            counter++;
        }
        if (i == str.length() - 1 && sign.find(str[i]) == string::npos)
        {
            counter++;
        }
        prev = str[i];
    }
    return counter;
}
