#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> uniqueWords(const string& str)
{
    vector<string> unique;
    string sign = " ,.";
    string word = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (sign.find(str[i]) == string::npos)
        {
            word += str[i];
        }
        else if (word != "" && count(unique.begin(), unique.end(), word) == 0)
        {
            unique.push_back(word);
            word = "";
        }
        else
        {
            word = "";
        }
    }
    if (word != "" && count(unique.begin(), unique.end(), word) == 0)
    {
        unique.push_back(word);
    }
    return unique;
}
