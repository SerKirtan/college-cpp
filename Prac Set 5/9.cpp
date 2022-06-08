//Convert sec into  h,m,s
#include<iostream>
class Time{
private:
    int h,m,s,sec;
public:
    Time() : sec(0) , h(0) , m(0) , s(0) {}
    inline int getData()
    {
        std::cin >> sec;
    }
    void convert()
    {
        s=sec%60;
        m=sec/60;
        while(m>=60){
            m=m-60;
            h++;
        }
    }
    void displayData()
    {
        std::cout << "------------------------\n";
        std::cout << "Entered Time : " << sec << "\n";
        std::cout << "Conversion [hours:mins:seconds] : "<< h << ":" << m << ":" << s << "\n";
    }
    Time add(Time t)
    {
        Time temp;
        temp.sec = sec + t.sec;
        return temp;
    }
};
int main(){
    int size , time1 , time2 ;
    std::cout << "Enter how many times you want to convert time : ";
    std::cin >> size;
    Time t[size];

    for(int i = 0 ; i < size ; i++)
    {
        std::cout << "----------------------------------\n";
        std::cout << "Enter the time in seconds : ";
        t[i].getData();
    }
    std::cout << "----------------------------------\n";

    for(int i = 0 ; i < size ; i++)
    {
        t[i].convert();
        t[i].displayData();
    }
    std::cout << "------------------------\nEnter which two time you want to add : ";
    std::cin >> time1 >> time2 ;
    --time1;
    --time2;
    if( time1 < size && time2 < size )
    {
        Time added_time = t[time1].add( t[time2] );
        added_time.convert();
        added_time.displayData();
    }
    else
        std::cout << "Invalid input" ;
    std::cout << "------------------------\n";
}
