#include<iostream>
#include<string>
class Country
{
private:
    std::string country_name , capital ;
    int population;
public:
    void input()
    {
        fflush(stdin);
        std::cout << "Enter country name : " ; 
        getline(std::cin , country_name);
        std::cout << "Enter capital      : " ;
        getline(std::cin , capital);
        std::cout << "Enter population   : " ;
        std::cin >> population ;
    }
    inline void print()
    {
        std::cout << "Country name : " << country_name << "\nCapital      : " << capital << "\nPopulation   : " << population << "\n" ;
    }
};
int main()
{
    int size ;
    std::cout << "Enter how many contry information you want to store : ";
    std::cin >> size ;
    Country *country_obj = new Country[size];
    Country *ptrTemp = country_obj;
    for(int i = 0 ; i < size ; i++)
    {
        std::cout << "Enter Country-"<< i + 1 << " details\n";
        country_obj->input();
        country_obj++;
    }
    country_obj = ptrTemp ;
    for(int i = 0 ; i < size ; i++)
    {
        std::cout << "\n\nCountry-"<< i + 1 << " details\n";
        country_obj->print();
        country_obj++;
    }
}
