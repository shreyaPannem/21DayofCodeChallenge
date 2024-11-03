#include <iostream>
using namespace std;

bool isAlphaNumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') || tolower(ch) >= 'a' && tolower(ch) <= 'z')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isPalindrome(string s)
{

    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        cout << s[start] << " " << s[end] << endl;
        if (s[start] == ' ')
        {
            start++;
            cout << "one executed" << " ";
            cout << s[start] << "space present in start so skipped" << endl;
            continue;
        }

        else if (s[end] == ' ')
        {
            end--;
            cout << "two executed" << " ";
            cout << s[end] << "space presntt in en dso skipped" << endl;
            continue;
        }
        else if (!isAlphaNumeric(s[start]))
        {
            cout << "three executed" << " ";
            start++;
            continue;
        }
        else if (!isAlphaNumeric(s[end]))
        {
            end--;
            cout << "four executed" << " ";
            continue;
        }

        else if (tolower(s[start]) != tolower(s[end]))
        {
            cout << "five executed" << " ";
            cout << s[start] << " " << (s[end]) << " " << end;
            return false;
        }

        start++;
        end--;
    }
    return true;
}

int main()
{
    cout << isPalindrome("race a car");
    return 0;
}