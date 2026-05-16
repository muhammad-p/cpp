#include<iostream>
#include<string>

int main()
{
    std::string str = "Muhammad";
    std::cout << str.length() << std::endl;//prints the length of the string
    str.pop_back();//removes the last character of the string
    

    std::cout<<str << std::endl; //prints the string without the last character
    str.push_back('d'); //adds a character at the end of the string
   // str.clear(); //clears the string
    std::cout<<str<< std::endl;
    std::cout<<str.back()<< std::endl; //prints the last character of the string
    std::cout<<str.front()<< std::endl; //prints the first character of the string
    std::cout<<str.back()<< std::endl;//prints the last character of the string
    std::cout<<str.at(3)<< std::endl;//prints the character at index 3 of the string
    std::cout<<str.substr(2,4)<< std::endl;//prints the substring of the string starting from index 2 and of length 4
    std::cout<<str.find("ham")<< std::endl;//prints the index of the first occurrence of the substring "ham" in the string
    std::cout<<str.find("xyz")<< std::endl;//prints -1 if the substring "xyz" is not found in the string
    std::cout<<str.compare("Muhammad")<< std::endl;//prints 0 if the string is equal to "Muhammad", a positive value if the string is greater than "Muhammad" and a negative value if the string is less than "Muhammad"
    std::cout<<str.compare("Ali")<< std::endl;//prints a positive value if the string is greater than "Ali", a negative value if the string is less than "Ali" and 0 if the string is equal to "Ali"
    std::cout<<str.find_first_of("a")<< std::endl;//prints the index of the first occurrence of the character 'a' in the string
    std::cout<<str.find_last_of("a")<< std::endl;//prints the index of the last occurrence of the character 'a' in the string
    std::cout<<str.find_first_not_of("M")<< std::endl;//prints the index of the first character that is not 'a' in the string
    std::cout<<str.find_last_not_of("d")<< std::endl;//prints the index of the last character that is not 'a' in the string
    std::cout<<str.insert(3,"abc")<< std::endl;//inserts the substring "abc" at index 3 of the string
    std::cout<<str.erase(3,3)<< std::endl;//erases the substring of the string starting from index 3 and of length 3
    str.replace(3,3,"xyz");//replaces the substring of the string starting from index 3 and of length 3 with the substring "xyz"
    std::cout<<str<< std::endl;
    return 0;

}