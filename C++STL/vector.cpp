#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;

    v1.push_back(3); // push back creates a temporary object to push which can be inefficient for complex data types like pair or tuple
    // does not cause much overhead for simple data types
    // push is preferred in industry for simple data types as it is more readable and easier to understand
    v1.emplace_back(2);

    vector<pair<int, char>> v2; // pair vector
    v2.push_back({1, 2});       // have to use curly braces
    v2.emplace_back(3, 'a');    // cant use curly braces
    // should use emplace when working with pairs or tuple as it avoids the overhead of creating a temporary pair/tuple object

    vector<int> v3(5, 10); // vector of size 5 with all elements initialized to 10

    vector<int> v4(v3); // copies v3

    vector<int> v5(5); // size 5 and elements can be 0 or garbage value depending on compiler

    v1.begin();  // returns pointer to first element
    v1.end();    // returns ptr to memory location right after last element, have to do itr-- to point to last element
    v1.rend();   // returns pointer to location right before 1st element, have to do itr-- to access first element
    v1.rbegin(); // returns pointer to last element
    v1.front();  // first element
    v1.back();   // last element

    v1.size();       // size of vector
    v1.reserve(100); // reserves memory for 100 elements, does not change size of vector, if size exceeds 100, vector will automatically resize and reserve more memory
    v1.resize(3);    // resizes vector to size 3, if new size is greater than current size, new elements are initialized to 0, if new size is less than current size, elements are removed from the end of the vector

    // accessing vector
    cout << v1[0];

    vector<int>::iterator itr1;
    itr1 = v1.begin();

    vector<int>::reverse_iterator itr2 = v5.rend(); // itr2 is a reverse iterator; itr2++ moves to the previous element

    auto it = std::prev(v5.end()); // returns iterator to the last element, prev moves the iterator back by 1 position

    auto it = itr2.base(); // returns the corresponding forward iterator for the reverse iterator itr2; it points to the element right after the one pointed to by itr2
    // if itr2 points to the last element, it will point to the location right after the last element which is v5.end()

    // printing vector
    for (auto itr1 = v1.begin(); itr1 != v1.end(); ++itr1)
    {
        std::cout << *itr1;
    }

    for (auto itr2 : v5)
    {
        std::cout << itr2; // range based for loop, simpler syntax, less error prone, cannot modify elements of vector using this loop
        // no need to dereference iterator, can directly use the element
    }

    v3.erase(v1.begin());                 // erases the first element of v1, all elements are shifted to the left, size of vector is reduced by 1
    v3.erase(v1.begin(), v1.begin() + 2); // erases the first 2 elements of v1, all elements are shifted to the left, size of vector is reduced by 2
//second parameter is exclusive, so it erases elements from first parameter to second parameter-1
    vector<int> v(2, 100);          // {100, 200}
    v.insert(v.begin(), 300);       // (300, 100, 100);
    v.insert(v.begin() + 1, 2, 10); // (300, 10, 10, 100, 100)

    v.insert(v.begin() + 2, {1, 2, 3}); // (300, 10, 1, 2, 3, 10, 100, 100)
    // inserts 1, 2, 3 at index 2 and shifts the rest of the elements to the right, size of vector is increased by 3

    v.pop_back(); // removes the last element of the vector, size of vector is reduced by 1
    v.capacity(); // returns the total capacity of the vector, which is the total number of elements that can be stored in the vector without resizing
    v.clear();    // removes all elements from the vector, size of vector becomes 0
    v.empty();    // returns true if vector is empty, false otherwise

    v1.swap(v3); // swaps the contents of v1 and v3, size of v1 becomes size of v3 and vice versa, capacity of v1 becomes capacity of v3 and vice versa
    return 0;
}