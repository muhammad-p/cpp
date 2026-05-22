#include<list>
#include<forward_list>//includes singly linked list, does not have reverse iterators, does not have size() function, less memory overhead than list
#include<iostream>
int main()
{
    //list is internally implemented as a doubly linked list
    std::list<int> l1; // list of integers
    l1.push_back(1); // adds element at the end of the list
    l1.push_front(2); // adds element at the front of the list
    l1.emplace_back(3); // adds element at the end of the list, more efficient than push_back as it does not create a temporary object
    l1.emplace_front(4); // adds element at the front of the list, more efficient than push_front as it does not create a temporary object

    //rest functions are same as vector
    //begin(), end(), rbegin(), rend(), front(), back(), size(), empty(), clear(), insert(), erase(), swap() etc.
    return 0;
}
