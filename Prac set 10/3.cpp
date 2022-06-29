#include <iostream>
class DB;
class DM
{
private:
    float meters , centimeters ;
public:
    friend class DB;
    DM() : meters(0) , centimeters (0) {}
    inline void input()
    {
        std::cout << "Enter distance in meters and centimeters : ";
        std::cin >> meters >> centimeters ;
    }
    inline void display()
    {
        std::cout << "Meters : " << meters << " , Centimeters : " << centimeters << "\n";
    }
    void convert()
    {
        while(centimeters >= 100)
        {
            centimeters -= 100 ;
            meters++;
        }
    }
};
class DB
{
private:
    float feet , inches ;
public:
    friend class DM;
    DB() : feet(0) , inches(0) {}
    inline void input()
    {
        std::cout << "Enter distance in feet and inches : ";
        std::cin >> feet >> inches ;
    }
    inline void display()
    {
        std::cout << "Feet : " << feet << " , Inches : " << inches << "\n";
    }
    void convert()
    {
        while (inches >= 12)
        {
            inches -= 12 ;
            feet++ ;
        }
        
    }
    void add1(DM &mm)
    {
        feet += mm.meters * 3.28 ;
        inches += mm.centimeters * 0.3937 ;
        convert();
        display();
    }
    void add2(DM &ff)
    {
        ff.meters += feet * 0.3048 ;
        ff.centimeters += inches * 2.54 ;
        ff.convert();
        ff.display();
    }
};
int main()
{
    int check;
    DM d1;
    DB d2;
    d1.input();
    d2.input();
    jump:
    std::cout << "In which unit you want your added result in?\nSelect -> 1] Meters & centimeters 2] feet & inches : ";
    std::cin >> check ;
    switch (check)
    {
    case 1:
        d2.add2(d1);
        break;
    case 2:
        d2.add1(d1);
        break;
    default:
        std::cout << "Invalid Input :( Try again\n";
        goto jump;
    }
}