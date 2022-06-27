#include<iostream>
#include<string>
class Roll_no
{
protected:
    long int Rollno;
};
class Engineering : protected Roll_no
{
protected:
    std::string University;
    class Roll_no r;
public:
    void input()
    {
        std::cout << "\nEnter Roll number : ";
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
    class Engineering e;
public:
    CE()
    {
        e.input();
        this->input();
        std::cout << "---------------------\nDisplaying information\n---------------------\n";
        e.display();
        this->display();
    }
    void input()
    {
        std::cout << "Enter no of courses in CE : ";
        std::cin >> no_of_courses ;
    }
    void display()
    {

        std::cout << "No of courses in CE : "<< no_of_courses << "\n";
    }
};
class IT : protected Engineering
{
private:   
    int no_of_courses;
    class Engineering e;
public:
    IT()
    {
        e.input();
        input();
        std::cout << "---------------------\nDisplaying information\n---------------------\n";
        e.display();
        display();
    }
    void input()
    {
        std::cout << "Enter no of courses in IT : ";
        std::cin >> no_of_courses ;
    }
    void display()
    {
        std::cout << "No of courses in IT : "<< no_of_courses << "\n";
    }
};
int main()
{
    IT i;
    CE c;
}
