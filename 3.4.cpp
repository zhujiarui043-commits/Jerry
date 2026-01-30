#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == s2)
        cout << "s1 equals to s2.\n" << endl;
    else if(s1 > s2)
        cout << s1 << endl;
    else
        cout << s2 << endl;
    return 0;

}