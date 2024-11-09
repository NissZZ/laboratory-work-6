#include <iostream>
#include <map>
using namespace std;

map<string, int> wordsMapCounter(const string& str)
{
    map<string, int> wordsMap;
    string word = "";
    string sign = " ,.";
    for (int i = 0; i < str.length(); i++)
    {
        if(sign.find(str[i]) == string::npos)
        {
            word = word + str[i];
        }
        else
        {
            if(word != "")
            {
                wordsMap[word] += 1;
                word = "";
            }
        }
    }
    if (word != "")
    {
        wordsMap[word] += 1;
    }
    return wordsMap;
}
