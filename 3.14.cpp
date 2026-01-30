#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> ivec;
    int a;
    while(cin >> a)
        ivec.push_back(a);
    for(vector<int>::size_type i = 0; i < ivec.size(); ++i )
        cout << ivec[i] <<" ";
    cout << endl;
    return 0;

}