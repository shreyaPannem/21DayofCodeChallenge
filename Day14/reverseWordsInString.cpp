// https://leetcode.com/problems/reverse-words-in-a-string/
#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s)
{
    int n = s.length();
    string newStr = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (s[i] != ' ' && i < n)
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            newStr += " " + word;
            word = "";
        }
    }

    return newStr.substr(1);
}

int main()
{

    return 0;
}