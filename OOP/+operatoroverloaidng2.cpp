#include <iostream>
class twoDpoint
{
    int x, y;

public:
    friend twoDpoint operator+(const twoDpoint &a, int& n);
    twoDpoint(int x, int y) {
        this->x =x;
        this->y =y;
    }
    int getx(){return x;}
    int gety(){return y;}
};
twoDpoint operator+(const twoDpoint &a, int& n)
{
    int nx = a.x + n;
    int ny = a.y + n;
    return twoDpoint(nx,ny);
}

int main()
{
    int n=5;
    twoDpoint obj1(2,3);
    std::cout<<obj1.getx()<<obj1.gety()<<std::endl;
    twoDpoint obj3=obj1+n;
    std::cout<<obj3.getx()<<obj3.gety();



    return 0;
}