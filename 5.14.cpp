/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> dictionary;
    vector<int> cnts;
    string word;
    while(cin >> word)
        dictionary.push_back(word);
    int cnt = 0;
    int max_cnt = 0;
    for(auto i : dictionary)
    {
        auto j = ++i;
        if(j == i)
            ++cnt;
        else
        {
            cnts.push_back(cnt);
            cnt = 0;
        }
            
    }
    for(auto i = cnts.begin(); i != cnts.end(); ++i)
    {
        if(*i > max_cnt)
            max_cnt = *i;
    }
}*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> dictionary; // 存储输入的所有单词
    vector<int> cnts;          // 存储每组连续重复单词的计数
    string word;

    // 读取输入的单词，直到输入结束（Windows按Ctrl+Z，Linux按Ctrl+D）
    while(cin >> word)
        dictionary.push_back(word);

    // 处理空输入的情况，避免后续越界
    if(dictionary.empty())
    {
        cout << "没有输入任何单词" << endl;
        return 0;
    }

    int cnt = 1; // 计数从1开始（至少有1个单词）
    int max_cnt = 1;

    // 遍历单词列表，从第二个单词开始比较
    for(size_t i = 1; i < dictionary.size(); ++i)
    {
        // 如果当前单词和前一个单词相同，计数+1
        if(dictionary[i] == dictionary[i-1])
        {
            ++cnt;
        }
        else
        {
            // 不同则保存当前计数，并重置计数器
            cnts.push_back(cnt);
            cnt = 1;
        }
    }
    // 把最后一组连续单词的计数存入数组
    cnts.push_back(cnt);

    // 找出最大的计数值
    for(auto num : cnts)
    {
        if(num > max_cnt)
        {
            max_cnt = num;
        }
    }

    // 输出结果
    cout << "连续重复单词的最大次数：" << max_cnt << endl;

    return 0;
}