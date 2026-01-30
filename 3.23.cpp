#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> ten_words(10);
    int word;
    for(int i = 0; i < 10; i++)
    {
        cin >> word;
        ten_words[i] = word;
    }
    for(auto &a : ten_words)
        a *= 2;
    for(auto &b : ten_words)
        cout << b << " ";
    cout << endl;

}