//Create class string with following data member char str[20], for performing various comparison operations, overload >, <, ==, !=
#include<iostream>
#include<cstring>
class Distance
{
private:
    float feet , inches ;
public:
    Distance() : feet(0) , inches(0) {}
    void getData()
    {
        std::cout << "Enter distance in feets and inches : ";
        std::cin >> feet >> inches ;
        while(inches >= 12 )
        {
            inches -= 12 ;
            feet++ ;
        }
    }  
    inline void displayData()
    {
        std::cout << "Distance after conversion : " << feet << " Feet & " << inches << " inches\n";
    }
    void operator <(Distance d)
    {
        if( feet < d.feet || feet == d.feet && inches < d.inches)
            std::cout << "Distance-1 is smaller than Distance 2\n" ; 
    }
    void operator >(Distance d)
    {
        if( feet > d.feet || feet == d.feet && inches > d.inches)
            std::cout << "Distance-1 is bigger than Distance 2\n" ; 
    }
    void operator ==(Distance d)
    {
        if( feet == d.feet && inches == d.inches)
            std::cout << "Distance-1 is same as Distance-2\n";
    }
    void operator !=(Distance d)
    {
        if( feet != d.feet || inches != d.inches)
            std::cout << "Distance-1 is not same as Distance-2\n";
    }
};
int main()
{
    Distance d1 , d2 ;
    d1.getData();
    d2.getData();
    d1.displayData();
    d2.displayData();
    d1 < d2;
    d1 > d2;
    d1 == d2;
    d1 != d2;
}
