#include<iostream>
int n=1;
void printNto1()
{
    if(n<=5) n++; else return;
    if (n<=5)std::cout<<n;
    printNto1();
    return;
   
}
int main()
{
    printNto1();
   
    return 0;

}