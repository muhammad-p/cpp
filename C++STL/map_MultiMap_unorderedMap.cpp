#include <bits/stdc++.h>

int main()
{
    // map stores unique keys in sorted order
    std::map<int, int> m;                   // map is a collection of key-value pairs where each key is unique and maps to a single value, implemented as balanced binary search tree (usually red-black tree)
    std::map<int, std::pair<int, char>> m2; // map with pair as value
    std::map<std::pair<int, char>, int> m3; // map with pair as key
    m[1] = 2;                               // inserting key-value pair into the map
    m2[1] = {2, 'c'};                       // inserting key-value pair into the map, if key already exists, it will update the value associated with that key
    m3[{1, 'c'}] = 2;                       // inserting key-value pair into the map, if key already exists, it will update the value associated with that key

    m.emplace(2, 3); // inserting key-value pair into the map using emplace, if key already exists, it will update the value associated with that key


    m3.emplace(std::make_pair(1, 'c'), 2); // inserting key-value pair into the map using emplace, if key already exists, it will update the value associated with that key
    for (auto it : m3)                     // iterating over the map using range-based for loop, it is more efficient than using iterators
    {
        std::cout << it.first.first << " " << it.first.second << " " << it.second << "\n"; // printing key-value pairs of the map
    }

    std::cout << m[1] << "\n"; // accessing value associated with key 1, if key does not exist, it will create a new key-value pair with default value (0 for int)

    auto it= m.find(1); // find returns an iterator to the key-value pair if key is found, otherwise returns m.end()
    std::cout << it->second << "\n"; // accessing value associated with key 1 using iterator

    m.erase(1); // erase removes the key-value pair with key 1 from the map

    //erase swap size empty clear same as vector but with different time complexities





    std::multimap<int, int> mm; // multimap allows duplicate keys, sorted order, implemented as balanced binary search tree (usually red-black tree)
    //everything same as map
    //only m[key] and m.at(key) functions are not available for multimap because they return a reference to the value associated with the key, and in multimap, there can be multiple values associated with the same key, so it is not possible to return a reference to a single value





    std::unordered_map<int, int> um; // unordered_map stores unique keys in no particular order, implemented as hash table
    //everything same as set and multiset difference

    return 0;
}