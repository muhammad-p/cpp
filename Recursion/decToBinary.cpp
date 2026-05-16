#include<iostream>
#include<cmath>

long unsigned int decToBin(long dec)
{
    if (dec == 0) return 0;
    return dec % 2 + 10 * decToBin(dec / 2);
}

int main()
{
    std::cout << decToBin(500) << std::endl;

    return 0;
}
