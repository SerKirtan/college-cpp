//class string with the data member as char str[20]
#include<iostream>
#include<cstring>
class StringC
{
private:
    char str[20];
public:
    StringC() : str("Unknown") {}
    inline void getData()
    {
        std::cout << "Enter string [<20 letters] : ";
        std::cin >> str ;
    }
    inline void displayData()
    {
        std::cout << str << "\n";
    }
    void operator +( StringC& t )
    {
        strcat(str , t.str);
    }
};
int main()
{
    int size , string1 , string2 ;
    std::cout << "How many Strings you want to input : ";
    std::cin >> size ;
    StringC s[size];

    for(int i = 0 ; i < size ; i++)
        s[i].getData();

    std::cout << "All entered strings :- \n";
    for(int i = 0 ; i < size ; i++)
    {
        std::cout << i+1 << "]";
        s[i].displayData();
    }
    std::cout << "Which two Strings you want to concatenate : ";
    std::cin >> string1 >> string2 ;
    --string1;
    --string2;
    if( string1 < size && string2 < size)
    {
        s[string1] + s[string2] ;
        s[string1].displayData();
    }
    else    
        std::cout << "Invalid Input";
}
