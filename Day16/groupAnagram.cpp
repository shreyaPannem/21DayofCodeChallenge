// https://leetcode.com/problems/group-anagrams/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;
    for (string s : strs)
    {
        string word = s;
        sort(word.begin(), word.end());
        mp[word].push_back(s);
    }
    vector<vector<string>> ans;
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}
int main()
{

    return 0;
}