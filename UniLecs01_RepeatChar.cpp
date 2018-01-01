//Task 1. Все ли символы в строке встречаются один раз

#include <iostream>
#include <string>
#include <map>

using namespace std;

bool checkRepeat(const string& s)
{
    map<char, bool> m;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
        if ( !m[s[i]] ) m[s[i]] = true;
        else return true;
    }
    return false;
};


int main()
{
    cout << checkRepeat("abcdefgsdsd") << endl;
    cout << checkRepeat("abccdefg") << endl;
    cout << checkRepeat("aabcdefg") << endl;
    cout << checkRepeat("abcdefg") << endl;
}
