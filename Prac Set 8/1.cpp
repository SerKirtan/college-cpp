// Cricle -> Cyclinder
#include<iostream>
class Circle
{
protected:
    float radius , area;
public:
    Circle() : radius(0) , area(0) {}
    void input()
    {
        std::cout << "Enter radius : ";
        std::cin >> radius;
        calcArea();
    }
    inline void printDetails()
    {
        std::cout << "Radius = " << radius << " & Area = " << area << "\n";
    }
    inline void calcArea()
    {
        area = 3.141 * radius * radius ;
    }
};
class Cyclinder : protected Circle
{
private:
    float height;
public:
    Cyclinder() : height(0) {}
    void input()
    {
        std::cout << "Enter radius and height : ";
        std::cin >> radius >> height;
        calcVolume();
    }
    inline void printDetails()
    {
        std::cout << "Radius = " << radius << ", Height = "<< height << " & Area = " << area ;
    }
    inline void calcVolume()
    {
        area = 3.141 * radius * radius * height ;
    }
};
int main()
{
    Circle c;
    c.input();
    c.printDetails();
    Cyclinder cy;
    cy.input();
    cy.printDetails();
}
