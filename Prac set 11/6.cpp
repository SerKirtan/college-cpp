#include<iostream>
#include<fstream>
#include<string>
int main()
{
    int num[10] , temp;
    std::ofstream data;
    std::cout << "Enter 10 numbers : ";
    for(int i = 0 ; i < 10 ; i++)
        std::cin >> num[i];
    std::ofstream even;
    std::ofstream odd;
    even.open("even.txt" );
    odd.open("odd.txt" );
    for( int i = 0 ; i < 10 ; i++)
    {
        if(num[i] % 2 == 0)
            even.put(num[i]) ;
        else
            odd.put(num[i]) ;
    }
    even.close();
    odd.close();
    std::ifstream odd2;
    odd2.open("odd.txt");
    while(odd2.eof() != 1)
    {
        temp = odd2.get();
        if(temp == -1)
            break;
        std::cout << temp << " ";
    }
}