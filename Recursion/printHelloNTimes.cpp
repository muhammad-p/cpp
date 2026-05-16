#include<iostream>
void printHello(const int n)
{
    if(n==0) return ;
    std::cout<<"Hello!"<<std::endl;
    printHello(n-1);
}
int main()
{
    printHello(34);
}