#include <iostream>
class twoDpoint
{
    int x, y;

public:
    friend twoDpoint operator+(const twoDpoint &a, const twoDpoint &b);
    twoDpoint(int x, int y) {
        this->x =x;
        this->y =y;
    }
    int getx(){return x;}
    int gety(){return y;}
};
twoDpoint operator+(const twoDpoint &a, const twoDpoint &b)
{
    int nx = a.x + b.x;
    int ny = a.y + b.y;
    return twoDpoint(nx,ny);
}

int main()
{
    twoDpoint obj1(2,3);
    twoDpoint obj2(4,5);
    twoDpoint obj3=obj1+obj2;
    std::cout<<obj3.getx()<<obj3.gety();



    return 0;
}