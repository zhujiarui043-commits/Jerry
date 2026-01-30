#include<iostream>
#include<vector>
using namespace std;

// 1. 重命名加法函数，避免和std::plus冲突（改为add）
int add(int, int);
int sub(int, int);  // 原minus，已规避关键字冲突
int multiple(int, int);
int divide(int, int);

int main()
{
    // 2. 正确声明函数指针，绑定重命名后的add函数
    int (*padd)(int, int) = add;
    int (*psub)(int, int) = sub;
    int (*pmultiple)(int, int) = multiple;
    int (*pdivide)(int, int) = divide;

    // 3. 用decltype(add)推导正确的函数类型，消除歧义
    vector<decltype(add)*> fv = {padd, psub, pmultiple, pdivide};

    // 测试调用逻辑
    int a = 10, b = 2;
    cout << "测试数据：a=" << a << ", b=" << b << endl;
    cout << "加法结果：" << fv[0](a, b) << endl;
    cout << "减法结果：" << fv[1](a, b) << endl;
    cout << "乘法结果：" << fv[2](a, b) << endl;
    cout << "除法结果：" << fv[3](a, b) << endl;

    // 测试除数为0的情况
    int c = 5, d = 0;
    cout << "\n测试数据：c=" << c << ", d=" << d << endl;
    cout << "除法结果（除数为0）：" << fv[3](c, d) << endl;

    return 0;
}

// 加法函数（重命名为add，规避命名冲突）
int add(int a, int b)
{
    return a + b;
}

// 减法函数
int sub(int a, int b)
{
    return a - b;
}

// 乘法函数
int multiple(int a, int b)
{
    return a * b;
}

// 除法函数（修正了==判断）
int divide(int a, int b)
{
    if (b == 0)
        return -1;
    else
        return a / b;
}