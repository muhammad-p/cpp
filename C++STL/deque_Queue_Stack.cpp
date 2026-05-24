#include<bits/stdc++.h>


int main()
{
    //deque -FIFO/LIFO
    std::deque<int> d1; 
    d1.push_back(1); 
    d1.push_front(2); 
    d1.emplace_back(3); 
    d1.emplace_front(4);

    d1.pop_back(); // removes the last element of the deque, size of deque is reduced by 1 
    d1.pop_front(); // removes the first element of the deque, size of deque is reduced by 1

    //rest functions are same as vector
    //begin(), end(), rbegin(), rend(), front(), back(), size(), empty(), clear(), insert(), erase(), swap() etc.


    //stack-LIFO
    std::stack<int> s1,s2; 
    s1.push(1); 
    s1.emplace(2); 
    s1.top();
    s1.pop();
    s1.size();
    s1.empty();
    s1.swap(s2); 



    //queue-FIFO
    std::queue<int> q1,q2; 
    q1.push(1);
    q1.emplace(2);//1 2
    //back refers to the element lastly added to the queue, front refers to the element that will be removed first from the queue
    q1.front();//prints first element
    q1.back();//prints last element
    q1.pop();//deletes front
    q1.size();
    q1.empty();
    q1.swap(q2);
    q1.back()=10; // we can modify the last element of the queue using back() function, but we cannot modify the first element of the queue using front() function as it returns a copy of the first element, not a reference to it
}