// Write a program using file handling concepts to read from
// “Country” and “capital” file and display data for the same.
#include<iostream>
#include<fstream>
#include<string>
int main()
{
    std::string str;
    std::cout << "Country file :\n";
    std::ifstream in;
    in.open("country.txt");
    while (in.eof()==0)
    {
        getline( in , str);
        std::cout << str << "\n";
    }
    in.close();
    std::cout << "\nCapital file :\n";
    in.open("capital.txt");
    while (!in.eof())
    {
        getline( in , str);
        std::cout << str << "\n" ;
    }
    in.close();
}