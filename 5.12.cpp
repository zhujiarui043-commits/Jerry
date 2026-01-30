#include<iostream>
using namespace std;
int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, tableCnt = 0, spaceCnt = 0, newlineCnt = 0;
    char ch;
    while(cin >> ch)
    {
        if(ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A';
        switch(ch)
        {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            case '\t':
                ++tableCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\n':
                ++newlineCnt;
                break;
            default:
                break;

        }

       
    }
    cout << "Number of vowel a: " << aCnt << endl;
    cout << "Number of vowel e: " << eCnt << endl;
    cout << "Number of vowel i: " << iCnt << endl;
    cout << "Number of vowel o: " << oCnt << endl;
    cout << "Number of vowel u: " << uCnt << endl;
    cout << "Number of table: " << tableCnt << endl;
    cout << "Number of space: " << spaceCnt << endl;
    cout << "Number of newline: " << newlineCnt << endl;
    return 0;
}