// WAP to convert from ton to Kg & gms and vice-versa. Create
// two classes for the same. Class tons (with ton as data member)
// and Class kilo (with kg and gms as data members)Use formula
// 1 ton = 100 kg, 1kg = 1000gms
#include<iostream>
class kilo;
class tons
{
private:
    double ton;
public:
    tons() : ton(0) {} //deafault constructor
    tons(double x)
    {
        ton=x;
    }
    inline void input()
    {
        std::cout << "Enter ton : ";
        std::cin >> ton;
    }
    inline void printDetails()
    {
        std::cout << "Ton : " << ton << "\n";
    }
    inline double getTon()
    {
        return ton;
    }
};
class kilo
{
private:
    double kg , gms;
public:
    kilo() : kg(0) , gms(0) {}
    kilo(tons t)
    {
        gms = (t.getTon()) * 100 * 1000 ;
        convert();
    }
    void input()
    {
        std::cout << "Enter Kg and grams : ";
        std::cin >> kg >> gms ;
    }
    void convert()
    {
        kg = (int)(gms/1000);
        gms = (int)gms % 1000;
    }
    inline void printDetails()
    {
        std::cout << "Kg : " << kg << " Grams : "<< gms << "\n";
    }
    operator tons()
    {
        tons temp;
        double kg2 = kg;
        kg2 += (gms/1000);
        kg2/=100;
        temp = kg2;
        return temp;
    }
};

int main()
{
    kilo k; // kilo class to tons
    k.input();
    tons t = k;
    t.printDetails();
    tons t2; //tons class to kilo
    t2.input();
    kilo k2 = t2 ;
    k2.printDetails();
}
