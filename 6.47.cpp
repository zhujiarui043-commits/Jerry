#include<iostream>
using namespace std;
int main()
{
    #ifndef NDEBUG
        cerr << __func__ << "ERROR!" << endl;
    #endif

    cout << "1" << endl;

}