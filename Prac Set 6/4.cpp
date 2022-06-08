//Create class string with following data member char str[20], for performing various comparison operations, overload >, <, ==, !=
#include<iostream>
#include<cstring>
class StringC
{
private:
    char str[20] ;
public:
    StringC() : str("Unknown") {}
    inline void input()
    {
        std::cout << "Enter String : ";
        std::cin >> str ;
    }
    void operator <(StringC s)
    {
        if( strlen(str) < strlen(s.str))
            std::cout << "String 1 is smaller than String 1 \n";
    }
    void operator >(StringC s)
    {
        if( strlen(str) > strlen(s.str))
            std::cout << "String 1 is bigger than String 2 \n";
    }
    void operator ==(StringC s)
    {
        if( !(strcmp(str , s.str)) )
            std::cout << "String-1 is same as String-2 \n";
    }
    void operator !=(StringC s)
    {
        if( strcmp(str , s.str) )
            std::cout << "String-1 is not same as String-2 \n";
    }
};
int main()
{
    StringC s1 , s2 ;
    s1.input();
    s2.input();
    s1 < s2;
    s1 > s2;
    s1 == s2;
    s1 != s2;
}
