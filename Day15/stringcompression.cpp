#include <iostream>
#include <vector>
#include <strin>
using namespace std;
int compress(vector<char> &chars)
{
    int i = 0;
    int k = 0;
    while (i < chars.size())
    {
        int cnt = 0;
        char currentChar = chars[i];
        while (i < chars.size() && currentChar == chars[i])
        {
            cnt++;
            i++;
        }
        chars[k++] = currentChar;
        if (cnt > 1)
        {
            string s = to_string(cnt);
            for (auto it : s)
            {
                chars[k++] = it;
            }
        }
    }
    chars.resize(k);
    return chars.size();
}

int main()
{

    vector<char> chars = {"a", "b", "b", "b"};
    cout << compress(chars);
}