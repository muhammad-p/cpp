#include<iostream>
#include<fstream>

int main()
{
    std::ifstream file1("name.txt");//std::ios::in is default for ifstream
    if(!file1) std::cout<<"failed to open the file";//checking if file is opened successfully or not
    //file<<"Apple";
    std::string line;//std::getline() is used to read a line of text from the file and store it in the variable 'line'
    getline(file1,line);
    std::cout<<line;//printing the line read from the file
    file1.close();//closing the file after reading
    std::ofstream file2("name.txt",std::ios::app);//std::ios::out is default for ofstream, std::ios::app is used to append data to the end of the file instead of overwriting it
    file2<<"IsGoat\n";//writing "IsGoat" followed by a newline character to the file
    file2.close();
    std::ifstream file3("name.txt");//opening the file again to read the updated content
    std::cout<<"\n"<<file3.tellg();
    file3.seekg(4,std::ios::beg);//std::ios::beg is used to set the position of the file pointer to the beginning of the file, and 4 is the offset from the beginning
    std::cout<<"\n"<<file3.tellg();//printing the current position of the file pointer after seeking
    char ch;//declaring a character variable to store the character read from the file
    file3.get(ch);
    std::cout<<'\n'<<ch;//printing the character read from the file
    file3.close();

    std::fstream file4("name1.txt",std::ios::in | std::ios::out | std::ios::trunc);//std::ios::in | std::ios::out is default for fstream, it allows both reading and writing to the file
    //using trunc mode will create a new file or overwrite the existing file, so it will start with an empty file
    //if trunc is not used, the file will be opened in read/write mode without truncating, and the existing content will remain in the file. i.e. opens in append mode by default,
    // so the new content will be added at the end of the file without overwriting the existing content.
    std::cout<<"\n"<<file4.tellp();//printing the current position of the put pointer (write pointer) in the file
    std::cout<<"\n"<<file4.tellg();//printing the current position of the get pointer (read pointer) in the file
    file4<<"Macbook Air M4";//writing "Macbook Air M4" to the file
    file4.seekg(5,std::ios::beg);//setting the position of the get pointer to the 5th byte from the beginning of the file
    file4.seekp(2,std::ios::beg);//setting the position of the put pointer to the 2nd byte from the beginning of the file
    std::cout<<"\n"<<file4.tellg();//printing the current position of the get pointer after seeking
    std::cout<<"\n"<<file4.tellp();//this will show the same position as tellg() because both pointers are at the same position after seeking.
                                    // in fstream file there is only one pointer that serves both reading and writing operations, so when you seek to a position,
                                    // it affects both the get and put pointers. Therefore, after seeking to the 5th byte from the beginning of the file, 
                                  
                              //both tellg() and tellp() will return the same position, which is 5 bytes from the beginning of the file.
    file4.seekp(0,std::ios::end);//setting the position of the put pointer to the end of the file
    file4<<" is the best laptop\n";//writing " is the best laptop" followed by a newline character to the file
    file4.seekp(4,std::ios::beg);
    std::getline(file4,line);//reading a line of text from the file and storing it in the variable 'line', then printing it
    std::cout<<line;
    file4.put('X');//writing 'X' at the 4th byte from the beginning of the file, which will overwrite the existing character at that position
    std::getline(file4,line);//reading a line of text from the file and storing it in the variable 'line', then printing it
    std::cout<<line;
    file4.close();

    
    return 0;
}