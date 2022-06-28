// Write a program for string class using copy constructor.
#include<iostream>
#include<string>
class StringC
{
private:
    std::string str;
public:
    StringC() : str("Unknown") {}
    StringC( std::string strr)
    {
        str = strr;
    }
    StringC(const StringC &s)
    {
        str = s.str ;
    }
    void display()
    {
        std::cout << "\nString = " << str; 
    }
};
int main()
{
    std::string msg;
    std::cout << "Enter string : ";
    getline(std::cin , msg);
    StringC s1(msg);
    StringC s2(s1);
    std::cout << "\nDisplaying 2nd objects string";
    s2.display();
}
