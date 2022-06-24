// Create a class time12 that store hh:mm:ss in 12 hour format
// along with am or pm, createanother class time24 that store
// time hh:mm:ss in 24 hour format. Write a Conversion function
// to convert from one class object to another class object.
#include<iostream>
#include<string>
class Time12
{
private:
    int hour , min , sec ;
    std::string period;
public:
    Time12() : hour(0) , min(0) , sec(0) , period("Unknown") {}
    inline void print()
    {
        if(hour <= 12 && hour >0 && min < 60 && min >= 0 && sec < 60 && sec >= 0)
            std::cout << "Time is : "<< hour << ":" << min << ":"<< sec << " " << period ;
        else    
            std::cout << "Invalid" ;
    }
    inline void setPeriod(std::string temp)
    {
        period = temp ;
    }
    void setTime(int x, int y , int z)
    {
        hour = x;
        min = y;
        sec = z;
    }
};
class Time24
{
private:
    int hour , min , sec ;
public:
    Time24() : hour(0) , min(0) , sec(0) {}
    inline void input()
    {
        std::cout << "Enter time [24 hr format]: ";
        std::cin >> hour >> min >> sec ;
    }
    operator Time12()
    {
        Time12 temp;
        if( hour < 12 && hour > 0 || hour == 0)
        {
            temp.setPeriod("am");
            if( hour == 0 )
                hour += 12;
            temp.setTime( hour , min , sec );
        }
        else if( hour >= 12 && hour < 24)
        {
            temp.setPeriod("pm");
            if(hour > 12)
                hour -= 12 ;
            temp.setTime( hour , min , sec );
        }
        else    
            std::cout << "Invalid Input\n";
        return temp;
    }
};
int main()
{
    Time24 t1;
    t1.input();
    Time12 t2 = t1;
    t2.print();
}
