#include<iostream>
long unsigned int power(int x, int y)
{   
    if (y==1) return x;
    return x * power(x,y-1);
}
int main()
{
    std::cout<<power(2,11);
    return 0;
}