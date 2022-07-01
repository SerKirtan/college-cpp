// WAP to read from one file and write it to another file
#include<iostream>
#include<fstream>
#include<string>
int main()
{
    std::string str;
    std::ifstream in;
    std::ofstream out;
    in.open("3_1.txt");
    out.open("3_2.txt");
    while(in.eof() != 1)
    {
        getline( in , str);
        out << str << "\n";
    }
    in.close();
    out.close();
}