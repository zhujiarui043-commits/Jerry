#include<iostream>
int main()
{
    int a = 6, *p1, **p2;
    p1 = &a;
    p2 = &p1;
    std::cout << p1 << " " << *p1 <<" " << *p2 <<" "<< **p2 << std::endl;
}