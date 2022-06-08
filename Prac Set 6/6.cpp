//Write a program to compare two date class objects by overloading <, >, ==,!= operators
#include<iostream>
class Date
{
private:
    int day , month , year ;
public:
    Date() : day(1) , month(1) , year(1) {}
    inline void getDate()
    {
        std::cout << "Enter Day , Month and Year : ";
        std::cin >> day >> month >> year ;
    }
    int checkValidity()
    {
        switch(month)
        {
            case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
                if( day < 1 || day > 31)
                    return 0;
                else
                    return 1;
            case 4 : case 6 : case 9 : case 11 :
                if( day < 1 || day > 30)
                    return 0;
                else
                    return 1;
            case 2:
                if( day < 1 || day > 29 && year % 4 == 0 || day > 28 && year % 4 != 0)
                    return 0;
                else
                    return 1;
            default:
                    return 0;
        }
    }
    void operator <(Date d)
    {
        if( year < d.year || year == d.year &&  month < d.month || year == d.year && month == d.month && day < d.day)
            std::cout << "Date-1 is smaller than Date-2\n";
    }
    void operator >(Date d)
    {
        if( year > d.year || year == d.year &&  month > d.month || year == d.year && month == d.month && day > d.day)
            std::cout << "Date-1 is bigger than Date-2\n";
    }
    void operator ==(Date d)
    {
        if( year == d.year && month == d.month && day == d.day)
            std::cout << "Date-1 is same as Date 2\n";
    }
    void operator !=(Date d)
    {
        if( year != d.year || month != d.month || day != d.day)
            std::cout << "Date-1 is not same as Date 2\n";
    }
};
int main()
{
    Date d1 , d2 ;
    d1.getDate();
    d2.getDate();
    if( ( d1.checkValidity() && d2.checkValidity() ) )
    {
        d1 < d2;
        d1 > d2;
        d1 == d2;
        d1 != d2;
    }
    else
        std::cout << "Invalid date input\n";
}
