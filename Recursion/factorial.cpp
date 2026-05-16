#include<iostream>
unsigned long long factorial(const int n)
{
    if (n==1) return n;
    return n*factorial(n-1);
}
int main()
{
    std::cout<<factorial(4);
    return 0;
}