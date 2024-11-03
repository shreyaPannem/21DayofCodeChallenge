#include <iostream>
using namespace std;

string removeOccurrences(string s, string part)
{
    int sLength = s.length();
    int partLength = part.length();
    int start = 0;

    while (sLength >= partLength && start < s.length())
    {
        string temp = s.substr(start, partLength);
        if (temp == part)
        {

            s.erase(start, partLength);
            sLength = s.length();
            start = 0;
        }
        else
        {
            start++;
        }
    }

    return s;
}
int main()
{
    string s = "axxxxyyyyb";
    string part = "xy";
    cout << removeOccurrences(s, part);
    return 0;
}
