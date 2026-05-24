#include <bits/stdc++.h>
int main()
{
    

    // set-unique elements, sorted order, implemented as balanced binary search tree (usually red-black tree)
    std::set<int> s; // set is a collection of unique elements stored in sorted  order
    s.insert(5);     // inserting elements into the set
    s.insert(2);
    s.insert(8);
    s.insert(5); // duplicate elements will not be added to the set
    // functionality of insert in vector can also be used to increase efficiency of insertion in set
    // begin end rbegin rend size empty find count erase clear same as vector but with different time complexities

    auto it = s.find(2); // find returns an iterator to the element if found, otherwise returns s.end()
    s.erase(5);          // erase
    s.erase(it);        // erase by iterator

    int count = s.count(5); // count returns the number of occurrences of the element in the set (0 or 1 for set)
    auto it2=s.find(5);
    auto it3=s.find(2);
    s.erase(it2,it3); // erase a range of elements from the set (from it2 to it3, excluding it3)

    auto it=s.lower_bound(3); // lower_bound returns an iterator to the first element that is not less than the given value
    auto it4=s.upper_bound(3); // upper_bound returns an iterator to the first element that is greater than the given value






    
    // multiset- allows duplicate elements, sorted order, implemented as balanced binary search tree (usually red-black tree)
    std::multiset<int> ms; // multiset is a collection of elements that can have duplicates and are stored in sorted order
    ms.insert(1);          // inserting elements into the multiset
    ms.insert(1);
    ms.insert(1);
                     // duplicate elements will be added to the multiset

                     ms.erase(1); // erase removes all occurrences of 1 from the multiset
    ms.erase(ms.find(1)); // erase by iterator removes only one occurrence of 1 from the multiset

    ms.erase(ms.find(1), ms.find(3)); // erase a range of elements from the multiset (from the first occurrence of 1 to the first occurrence of 3, excluding the first occurrence of 3)
    

    //everything else is same as set but with different time complexities






    //unordered_set- unique elements, no order, implemented as hash table
    std::unordered_set<int> us; // unordered_set is a collection of unique elements stored in no particular order
    //lower bound and upper_bound functions are not available for unordered_set because it does not maintain any order
    //rest all functions are same as set but with different time complexities
    //it has better complexity than set in most cases
    //except when there are many collisions in the hash table, then it can degrade to O(n) in worst case





}