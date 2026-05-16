#include<iostream>
#include<string>
bool isPalindrome(std::string str)
{
    if(str.length()==0 || str.length()==1) return true;
    if(str.at(0) == str.at(str.length()-1))
    return isPalindrome(str.substr(1)) + str.at(0);

    return false;
}
int main()
{
    if(isPalindrome("racecar")==0) std::cout<<"False";
    else std::cout<<"true";
    //std::cout<<isPalindrome("appleelppa");
    return 0;
}