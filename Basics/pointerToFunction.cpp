//#include<iostream>
#include<bits/stdc++.h>//this header file includes all the standard library header files



int abs_compare(const int &a, const int &b)//callback function //& and &b are reference variables
{
   if(abs(a) > abs(b))
       return 1;
   return -1;
}
int compare(const int *a, const int *b)//callback function //can use pointer instead of reference variable too but reference variable is standard and more efficient
{
    
    if (*(a) > *(b))
        return 1;
    return -1;
}
void bubbleSort(int A[], int size, int (*ptr)(const int*,const int*))//function pointer as parameter
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
            if (ptr(&A[j], &A[j + 1]) > 0)
                A[j] = (A[j] + A[j + 1]) - (A[j + 1] = A[j]);
    }
}
int main()
{
    int arr[] = {1, -3, 2, 4, 0, -9, 1};
    bubbleSort(arr, 7,compare);
    for (int i = 0; i < 7; i++)
    {
        std::cout << arr[i] << " ";
    }
}
