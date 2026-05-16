#include <iostream>
#include <algorithm>
class Matrix
{
    int arr[2][3];

public:
    Matrix(int ar[2][3])
    {
        std::copy(&ar[0][0], &ar[0][0] + 6, &arr[0][0]);
    }
    Matrix operator+(const Matrix &other) const
    {
        int result[2][3];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result[i][j] = arr[i][j] + other.arr[i][j];
            }
        }
        return Matrix(result);
    }
    void const print()
    {
        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<arr[i][j];
        }
        std::cout<<std::endl;
    }
    }
};
int main()
{
    int array1[2][3] = {{2, 3, 4}, {2, 2, 2}};
    int array2[2][3] = {{1, 1, 1}, {1, 1, 1}};
    Matrix obj1(array1);
    Matrix obj2(array2);

    Matrix obj3 = obj1 + obj2;
    obj3.print();
    

    return 0;
}