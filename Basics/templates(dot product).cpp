#include <iostream>
template <typename T1, int size>
class vector
{
    public:
    T1 *ptr;
    vector(T1 a, T1 b,T1 c)
    {
        ptr = new T1[size];
        *ptr=a;
        *(ptr +1)=b;
        *(ptr +2)=c;

    }
    T1 dotproduct(vector &v)
    {
        T1 d=0;
        for (size_t i = 0; i < size; i++)
        {
            d+= ptr[i]*v.ptr[i];
        }
        return d;
        
    }
};
int main()
{
    vector<float,3> v1(1.3,23.1,3.9);
    vector<float,3> v2(-1,1,2);
    float sp= v1.dotproduct(v2);
    std::cout<<sp;


    

    return 0;
}