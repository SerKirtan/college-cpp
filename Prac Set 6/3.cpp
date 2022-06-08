//dd/mm/yy
#include<iostream>
class Date
{
private:
    int dd , mm , yy ;
public:
    Date() : dd(1) , mm(1) , yy(1) {}
    inline void getDate()
    {
        std::cout << "Enter Day , Month and Year : ";
        std::cin >> dd >> mm >> yy ;
    }
    void setDate(int& d , int& m , int& y)
    {
        dd = d ;
        mm = m ;
        yy = y ;
    }
    int checkValidity()
    {
        switch(mm)
        {
            case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
                if( dd < 1 || dd > 31)
                    return 0;
                else
                    return 1;
            case 4 : case 6 : case 9 : case 11 :
                if( dd < 1 || dd > 30)
                    return 0;
                else
                    return 1;
            case 2:
                if( dd < 1 || dd > 29 && yy % 4 == 0 || dd > 28 && yy % 4 != 0)
                    return 0;
                else
                    return 1;
            default:
                    return 0;
        }
    }
    void printDate()
    {
        if( dd > 9 && mm > 9)
            std::cout << dd << "/" << mm << "/" << yy;
        else if( dd < 10 && mm > 9)
            std::cout << "0" << dd << "/" << mm << "/" << yy;    
        else if( dd > 9 && mm < 10)
            std::cout << dd << "/0" << mm << "/" << yy; 
        else
            std::cout << "0" << dd << "/0" << mm << "/" << yy; 
    }
    void operator ++(int)
    {
        switch(mm)
        {
            case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
                if(dd==31)
                {
                    dd=1;
                    if(mm==12)
                    {
                        mm=1;
                        yy++;
                    }
                    else
                        mm++;
                }
                else
                    dd++;
                break;
            case 4 : case 6 : case 9 : case 11 :
                if(dd==30)
                {
                    dd=1;
                    mm++;
                }
                else    
                    dd++;
                break;
            case 2 :
                if( yy % 4 == 0 && dd == 29)
                {
                    dd=1;
                    mm++;
                }
                else if( yy % 4 != 0 && dd == 28 )
                {
                    dd=1;
                    mm++;
                }
                else    
                    dd++;
                break;
            default:
                std::cout << "Invalid month";
        }
    }
};

int main()
{
    Date d;
    d.getDate();
    if(d.checkValidity())
    {
        d.printDate();
        std::cout << "\n--------------\nAfter increment\n";
        d++ ;
        d.printDate();
    }
    else
        std::cout << "Invalid Input";
}
