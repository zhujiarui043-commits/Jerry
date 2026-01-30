#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> range(11, 0);
    int score;
    while(cin >> score)
    {
        auto i = range.begin() + score/10;
        ++(*i);
    }
    for(auto i : range)
        cout << i << " ";
    cout << endl;
    

}