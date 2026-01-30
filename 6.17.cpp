#include<iostream>
using namespace std;
bool is_capital(const string s);
string tolower(string &s);

int main()
{
    string s1 = "abcdefg";
    string s2 = "AbcdEfg";
    cout << ( is_capital(s1) ? tolower(s1) : s1 ) << endl;
    cout << ( is_capital(s2) ? tolower(s2) : s2 ) << endl;
}
bool is_capital(const string s)
{
    for(auto i : s)
    {
        if(i >= 'A' && i <= 'Z')
            return true;
    }
    return false;
}

string tolower(string &s)
{
    for(auto &i : s)
    {
        if(i >= 'A' && i <= 'Z')
            i += 'a' - 'A';
    }
    return s;
}