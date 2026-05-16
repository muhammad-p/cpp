#include <iostream>
#include <vector>
void display(std::vector<int> &v)
{
    for (auto &s : v)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::vector<int> v1 = {1, 2, 3, 4};
    v1.push_back(21);//adds an element at the end of the vector
    display(v1);

    v1.pop_back();//removes the last element of the vector
    display(v1);
    v1.clear();//clears the vector and sets its size to 0 but does not change its capacity
    display(v1);

    std::vector<int> v3(5);//creates a vector of size 5 and initializes all elements to 0
    std::vector<int> v2(5, 10);//creates a vector of size 5 and initializes all elements to 10

    int size=25;
    auto itr = v2.begin(); // same as std::vector<int>::iterator itr= v1.begin() //iterator pointing to the 
                            //first element of the vector
    v2.insert(itr,2,25);//inserts 2 elements of value 25 at the position pointed by the iterator
    display(v2);
    v2.insert(v2.begin()+1,2,400);//inserts 2 elements of value 400 at the position pointed by the iterator
    display(v2);

    std::cout<< "Size of v2: " << v2.size() << std::endl;//returns the number of elements in the vector
    std::cout<< "Capacity of v2: " << v2.capacity() << std::endl;//returns the capacity of the vector

    std::cout<< "Element at index 2: " << v2.at(2) << std::endl;//returns the element at the specified index

    std::cout<< "First element: " << v2.front() << std::endl;//returns the first element of the vector
    std::cout<< "Last element: " << v2.back() << std::endl;//returns the last element of the vector
    std::cout<<"end element: " << *v2.end() << std::endl;//returns the element at the position pointed by the end iterator. it is a pointer to the position after the last element of the vector. it is not a valid element of the vector and dereferencing it will result in undefined behavior. so we use end-1 to get the last element of the vector.
    std::cout<< "max element in vector: " << *std::max_element(v2.begin(), v2.end()) << std::endl;//returns the maximum element in the vector
    std::cout<< "min element in vector: " << *std::min_element(v2.begin(), v2.end()) << std::endl;//returns the minimum element in the vector
    //maxelement and minelement functions are defined in the algorithm header file. they return the address of the maximum and minimum element in the vector respectively.
    // we need to dereference the pointer to get the value of the element.


    std::vector<int> v4(v2);//creates a vector v4 which is a copy of v2
    display(v4);
    v4.erase(v4.begin()+1,v4.begin()+3);//erases the elements from index 1 to index 2 (3-1) of the vector
    display(v4);

    v4.emplace_back(100);//adds an element at the end of the vector using emplace_back function. it is more efficient than push_back
                            //as it constructs the element in place without copying or moving it.
    display(v4);

    v4.emplace(v4.begin()+1,200);//inserts an element at the position pointed by the iterator using emplace function.
                                // it is more efficient than insert as it constructs the element in place without copying or moving it.
    display(v4);

    v4.shrink_to_fit();//reduces the capacity of the vector to fit its size. it is a non-binding request to reduce the capacity of the vector to fit its size. it may or may not reduce the capacity of the vector.
    std::cout<< "Size of v4: " << v4.size() << std::endl;//the difference between size and capacity is that size is the number of 
                                                        //elements in the vector while capacity is the number of elements that the vector can hold before it needs to allocate more memory.
                                                        // when we insert or add elements to the vector, if the size exceeds the capacity, the vector will automatically allocate more memory
                                                        // to accommodate the new elements. this process is called reallocation. when we call shrink_to_fit, it may reduce the capacity of the 
                                                        //vector to fit its size, but it is not guaranteed to do so. it depends on the implementation of the vector and the current state of the vector.
    std::cout<< "Capacity of v4: " << v4.capacity() << std::endl;

    std::reverse(v4.begin(), v4.end()-2);//reverses the elements from the first element to the second last element of the vector
    display(v4);

    v1.reserve(10);//reserves the capacity of the vector to at least 10.
    // it does not change the size of the vector but may change its capacity. if the current capacity is less than the requested
    // capacity, it will allocate new memory and move the existing elements to the new memory location. 
    //reallocate is a costly operation as it involves copying or moving the existing elements to the new memory location. 
    //therefore, it is recommended to reserve the capacity of the vector if we know the number of elements that we will be adding to the vector in advance.
    v1.rbegin();//returns a reverse iterator pointing to the last element of the vector
    v1.rend();//returns a reverse iterator pointing to the position before the first element of the vector
    std::vector<int> :: reverse_iterator rit = v1.rbegin(); // same as std::vector<int>::reverse_iterator rit= v1.rbegin() //reverse iterator pointing to the last element of the vector
    // we can use reverse iterators to traverse the vector in reverse order. we can also use them to insert or erase elements in reverse order.

    v1.data();//returns a pointer to the first element of the vector. it is useful when we want to pass the vector to a function that expects a pointer to an array.
    return 0;
}
//boil down the code to its essentials and explain the key concepts of vectors in C++.