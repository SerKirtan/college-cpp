// Write a program using file handling to demonstrate the
// concepts of get() and put() functions

#include<iostream>
#include<fstream>
#include<string>
int main()
{
    char ch;
    std::string str;
    std::ifstream in;
    in.open("2_1.txt");
    while (in)
    {
        in.get(ch);
        std::cout << ch ;
    }
    in.close();
    std::cout << "\nEnter a string : ";
    getline(std::cin , str);
    std::ofstream out;
    out.open("2_2.txt");
    for(int i = 0 ; str[i] != '\0' ; i++)
        out.put(str[i]);
    out.close();
}