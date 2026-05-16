#include<bits/stdc++.h>
class Fraction
{
    int num;
    int den;
    public:
    int getNum()
    {
        return num;
    }
    int getDen()
    {
        return den;
    }
    Fraction(int n, int d):num(n),den(d) { }
    Fraction operator*(const Fraction& other) const{
        int newNum=num*other.num;
        int newDen=den*other.den;
        return Fraction(newNum,newDen);

    }

};
int main()
{
    Fraction f1(1,2);
    Fraction f2(3,4);
    Fraction f3 = f1 * f2; // Using the overloaded operator*
    std::cout << "Result of multiplication: " << f3.getNum() << "/" << f3.getDen() << std::endl;

    
    return 0;
}
