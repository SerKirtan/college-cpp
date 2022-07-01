// WAP to copy contents of one file to another
#include<iostream>
#include<fstream>
#include<string>
int main()
{
    std::string str;
    std::ifstream in;
    std::ofstream out;
    in.open("5_1.txt");
    out.open("5_2.txt");
    while(in.eof() != 1)
    {
        getline( in , str);
        out << str << "\n";
    }
    in.close();
    out.close();
}