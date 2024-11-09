#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int diffWordsCounter(const string& str)
{
    int cnt = 0;
    vector<string> words;
    string sign = " ,.";
    string word = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (sign.find(str[i]) == string::npos)
        {
            word += str[i];
        }
        else if (word != "" && count(words.begin(), words.end(), word) == 0)
        {
            words.push_back(word);
            cnt++;
            word = "";
        }
        else
        {
            word = "";
        }
    }
    if (word != "" && count(words.begin(), words.end(), word) == 0)
    {
        cnt++;
    }
    return cnt;
}
