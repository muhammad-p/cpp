#include<iostream>
void OneToN(int n)
{
    if (n==0) return;
    OneToN(n-1);
    std::cout<<n<< " ";
}
int main()
{
    OneToN(31);
    return 0;
}
