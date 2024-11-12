// https://leetcode.com/problems/valid-anagram/
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <unordered_map>
bool isAnagram(string s, string t)
{
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    if (s.length() != t.length())
    {
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        mp1[s[i]]++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        mp2[t[i]]++;
    }
    for (auto it : mp1)
    {
        cout << it.first << " " << it.second << endl;
        cout << "mp2 " << mp2[it.first] << endl;
        if ((mp2.find(it.first) != mp2.end() && it.second != mp2[it.first]) || (mp2.find(it.first) == mp2.end() && it.second != mp2[it.first]))
        {
            return false;
        }
    }
    return true;
}
int main()
{

    return 0;
}