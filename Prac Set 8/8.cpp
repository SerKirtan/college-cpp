#include<iostream>
#include<string>
class Rollno
{
protected:
    long int Rollno;
};
class Engineering : protected Rollno
{
protected:
    std::string University;
public:
    void input()
    {
        std::cout << "Enter Roll number : ";
        std::cin >> Rollno ;
        fflush(stdin);
        std::cout << "Enter University name : ";
        getline(std::cin , University);
    }
    void display()
    {
        std::cout << "\nStudent's Roll number : " << Rollno << "\n";
        std::cout << "University : " << University << "\n" ;
    }
};
class CE : protected Engineering
{
private:
    int no_of_courses;
public:
    void input()
    {
        Engineering::input();
        std::cout << "Enter no of courses in CE : ";
        std::cin >> no_of_courses ;
    }
    void display()
    {
        Engineering::display();
        std::cout << "No of courses in CE : "<< no_of_courses << "\n";
    }
};
class IT : protected Engineering
{
private:   
    int no_of_courses;
public:
    void input()
    {
        Engineering::input();
        std::cout << "Enter no of courses in IT : ";
        std::cin >> no_of_courses ;
    }
    void display()
    {
        Engineering::display();
        std::cout << "No of courses in IT : "<< no_of_courses << "\n";
    }
};
int main()
{
    CE c;
    IT i;
    c.input();
    i.input();
    std::cout << "----------------------\nDisplaying information\n----------------------\n";
    c.display();
    i.display();
}
