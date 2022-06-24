#include<iostream>
#include<string>
class Employee
{
private:
    std::string fname , lname;
public:
    Employee() : fname("Unknown") , lname("Unknown") {}
    void employeeInput()
    {
        std::cout << "Enter first name : ";
        std::cin >> fname;
        std::cout << "Enter last name : ";
        std::cin >> lname;
    }
    inline void employeePrint()
    {
        std::cout << "Name : "<< fname << " " << lname <<"\n";
    }
};
class HourlyWorker : private Employee
{
private:
    float wage , hours ;
public:
    HourlyWorker() : wage(0) , hours(0) {}
    float Getpay()
    {
        std::cout << "Enter hours worked and wage per hour : ";
        std::cin >> hours >> wage ;
        return (wage * hours);
    }
};
int main()
{
    Employee e;
    HourlyWorker h;
    e.employeeInput();
    float money_earnt = h.Getpay();
    e.employeePrint();
    std::cout << "Money earnt = " << money_earnt;
}
