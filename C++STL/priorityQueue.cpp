#include<bits/stdc++.h>
int main()
{
    //priority queue is implemented as a max heap by default, but we can also create a min heap by using greater<int> as the third template parameter
    //its underlying container is usually a vector, but we can also use a deque or a list as the underlying container by specifying it as the second template parameter
    std::priority_queue<int> pq1; // max heap by default
    pq1.push(3);
    pq1.push(1);
    pq1.push(2);
    pq1.emplace(4);

    pq1.top(); // returns the largest element in the priority queue
    pq1.pop(); // removes the largest element from the priority queue, size of priority queue is reduced by 1
    //size swap empty clear functions are same as vector
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq2; // min heap
    pq2.push(3);
    pq2.push(1);
    pq2.push(2);
    pq2.emplace(4);

    pq2.top(); // returns the smallest element in the priority queue
    pq2.pop(); // removes the smallest element from the priority queue, size of priority queue is reduced by 1

    return 0;
}