#include<bits/stdc++.h>
int main()
{
    std::pair<int, std::string> pair1 = {4, "Apple"}; //pair can store 2 elements of different data types
    std::cout << pair1.first << " " << pair1.second<<"\n\n";

    std::pair<int, std::pair<std::string, std::string>> pair2={1,{"Apple","Ball"}};//pair can also store another pair as its second element
    std::cout <<pair2.first<<" "<<pair2.second.first<<" "<<pair2.second.second;
    std::cout<<"\n\n";

    std::pair<int,int> arr[]={{1,2},{3,4},{5,6},{7,8}}; //array of pairs can be used to store multiple pairs together
    std::cout << arr[0].first << " " << arr[0].second<<"\n";
    std::cout << arr[1].first << " " << arr[1].second<<"\n";
    std::cout << arr[2].first << " " << arr[2].second<<"\n";
    std::cout << arr[3].first << " " << arr[3].second<<"\n";

    std::tuple<int,int,int,int> tuple1={1,2,3,4};//tuple can store more than 2 elements and can be of different data types

    std::cout<< std::get<0>(tuple1)<<std::get<1>(tuple1)<<std::get<2>(tuple1)<<std::get<3>(tuple1)<<"\n"; //old way to access tuple elements

    auto [element1, element2, element3,element4]=tuple1; //structured binding to access tuple elements(c++17 feature)
    std::cout<<element2;
    return 0;
}
