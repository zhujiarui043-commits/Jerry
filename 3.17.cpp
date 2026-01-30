#include<iostream>
#include<vector>
#include<cctype>

using namespace std;
int main()
{
    vector<string> word;
    string index;
    while(cin >> index)
        word.push_back(index);
    for(auto &s : word)
        for(auto &a : s)
            a = toupper(a);
    for(auto &t : word)
        cout << t << endl;
    
} 