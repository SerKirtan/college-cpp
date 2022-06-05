//Create a class distance with the following data members int feet, float inches
#include<iostream>
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0) , inches(0) {}
    inline void getData()
    {
        std::cout << "Enter distance in feets and inches : ";
        std::cin >> feet >> inches ;
    }   
    inline void displayData()
    {
        std::cout << feet << " Feet & " << inches << "inches";
    }
    Distance addDistance(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet ;
        temp.inches = inches + d.inches ;
        while( temp.inches >= 12 )
        {
            temp.inches -= 12 ;
            temp.feet++ ;
        }
        return temp;
    }
};
int main()
{
    Distance d1 , d2;
    d1.getData();
    d2.getData();
    Distance added_dist = d1.addDistance(d2);
    added_dist.displayData();
}
