#include<iostream>
int sum(int a, int b);
int main()
{
    int _a = 5;
    int _b = 10;
    std::cout << "The sum of " << _a << " and " << _b << " is " << sum(_a, _b) << std::endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}