#include <algorithm>
#include <bits/stdc++.h>
int main()
{
    std::vector<int> v1 = {5, 2, 8, 1, 3};
    std::sort(v1.begin(), v1.end());                      // sorts the vector in ascending order, time complexity O(n log n)
    std::sort(v1.rbegin(), v1.rend());                    // sorts the vector in descending order, time complexity O(n log n)
    std::sort(v1.begin(), v1.end(), std::greater<int>()); // sorts the vector in descending order using greater comparator, time complexity O(n log n)

    int arr[] = {5, 2, 8, 1, 3};
    std::sort(arr, arr + 5);                      // sorts the array in ascending order
    std::sort(arr + 3, arr + 5);                  // sorts the last 2 elements of the array in ascending order
    std::sort(arr, arr + 5, std::greater<int>()); // sorts the array in descending order using greater comparator

    // greater is a comparator function that returns true if the first argument is greater than the second argument, and false otherwise. It is used to sort in descending order.
    // standard library provides many other comparator functions like less, less_equal, greater_equal, etc. that can be used to sort in different orders.

    std::pair<int, char> p1[] = {{1, 'a'}, {3, 'c'}, {2, 'b'}};
    // pass self made operator for sorting pairs
    // sort acc to second element of pair, if second element is same in ascending order, then sort acc to first element of pair in descending order

   // bool comp(std::pair<int, char> a, std::pair<int, char> b)
    
        // if (p1.second < p2.second)
        //     return true; // sort acc to second element of pair in ascending order
        // if (p1.second > p2.second)
        //     return false;
        // if (p1.second == p2.second)
        //     if (p1.first > p2.first) // if second element is same in ascending order, then sort acc to first element of pair in descending order
        //         return true;
        //     else // if second element is same in ascending order, then sort acc to first element of pair in descending order
        //         return false;



    int num = 7;
    int cnt = __builtin_popcount(num); // counts the number of set bits in the binary representation of num, time complexity O(log n)
    int cntl = __builtin_clz(num);     // counts the number of leading zeros in the binary representation of num, time complexity O(log n)
    int cntr = __builtin_ctz(num);     // counts the number of trailing zeros in the binary representation of num, time complexity O(log n)

    long long num2 = 15;
    int cnt2 = __builtin_popcountll(num2); // counts the number of set bits in the binary representation of num2, time complexity O(log n)

    std::string s = "123";
    std::reverse(s.begin(), s.end()); // reverses the string s, time complexity O(n)
    do
    {
        std::cout << s << "\n"; // prints all permutations of the string s, time complexity O(n!)
    } while (std::next_permutation(s.begin(), s.end()));
    // to find all permutations pass the string in sorted order to next_permutation function, it will generate all permutations in lexicographical order, time complexity O(n!)

    int arr1[] = {1, 2, 3, 4, 5};
    int max= *std::max_element(arr, arr + 5); // returns the maximum element in the array, time complexity O(n)
    int min= *std::min_element(arr, arr + 5); // returns the minimum element in the array, time complexity O(n)
}