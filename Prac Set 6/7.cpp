//Write a program to compare two time class objects by overloading <, >, ==,!= operators
//Convert sec into  h,m,s
#include<iostream>
class Time{
private:
    int hour , minute , second, input_seconds;
public:
    Time() : input_seconds(0) , hour(0) , minute(0) , second(0) {}
    int getData()
    {
        std::cout << "Enter time in seconds : ";
        std::cin >> input_seconds;
        convert();
    }
    void convert()
    {
        second=input_seconds%60;
        minute=input_seconds/60;
        while(minute>=60)
        {
            minute=minute-60;
            hour++;
        }
    }
    void displayData()
    {
        std::cout << "----------------------------\n";
        std::cout << "Entered Time : " << input_seconds << " seconds \n";
        std::cout << "Conversion [ hours : mins : seconds ] : "<< hour << ":" << minute << ":" << second << "\n";
    }
    void operator <(Time t)
    {
        if( input_seconds < t.input_seconds )
            std::cout << "----------------------------\nTime-1 is less than Time-2\n";
    }
    void operator >(Time t)
    {
        if( input_seconds > t.input_seconds )
            std::cout << "----------------------------\nTime-1 is more than Time-2\n";
    }
    void operator ==(Time t)
    {
        if( input_seconds == t.input_seconds )
            std::cout << "----------------------------\nTime-1 is same as Time-2\n";
    }
    void operator !=(Time t)
    {
        if( input_seconds != t.input_seconds )
            std::cout << "----------------------------\nTime-1 is not same as Time-2\n";
    }
};
int main()
{
    Time t1 , t2 ;
    t1.getData();
    t2.getData();
    t1.displayData();
    t2.displayData();
    t1 < t2 ;
    t1 > t2 ;
    t1 == t2 ;
    t1 != t2 ;
    std::cout << "----------------------------\n";
}
