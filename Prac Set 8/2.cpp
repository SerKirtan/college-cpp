#include<iostream>
#include<string>
class Person
{
protected:
    std::string name;
    int code;
public:
    Person() : name("unknown" ) , code(0) {}
    void personInput()
    {
        fflush(stdin);
        std::cout << "Enter name   : ";
        getline(std::cin , name);
        std::cout << "Enter code   : ";
        std::cin >> code ;
    }
    inline void personPrint()
    {
        std::cout << "Name   : " << name << "\nCode   : " << code << "\n";
    }
};

class Account : protected Person
{
protected:
    float pay;
public:
    Account() : pay(0) {}
    void accountInput()
    {
        personInput();
        std::cout << "Enter salary : ";
        std::cin >> pay ;
    }
    void accountPrint()
    {
        personPrint();
        std::cout << "Salary : " << pay << "\n";
    }
};

class Admin : protected Person
{
protected:
    float experience;
public:
    Admin() : experience(0) {}
    void adminInput()
    {
        personInput();
        std::cout << "Enter no of years worked : ";
        std::cin >> experience ;
    }
    void adminPrint()
    {
        personPrint();
        std::cout << "No of years worked : " << experience << "\n";
    }
};

class Employee : protected Admin , protected Account
{
public:
    void employeeInput()
    {
        accountInput();
        std::cout << "Enter no of years worked : ";
        std::cin >> experience ;
    }
    void employeePrint()
    {
        accountPrint();
        std::cout << "No of years worked : " << experience << "\n";
    }
};
int main()
{
    Person p;
    Account a;
    Admin a2;
    Employee e;
    std::cout << "Person Input\n";
    p.personInput();
    std::cout << "Account Input\n";
    a.accountInput();
    std::cout << "Admin Input\n";
    a2.adminInput();
    std::cout << "Employee Input\n";
    e.employeeInput();
    std::cout << "\nPerson Details\n";
    p.personPrint();
    std::cout << "\nAccount Details\n";
    a.accountPrint();
    std::cout << "\nAdmin Details\n";
    a2.adminPrint();
    std::cout << "\nEmployee Details\n";
    e.employeePrint();
}
