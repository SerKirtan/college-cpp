// Write a program to demonstrate use of read() and write() functions for person class.
#include<iostream>
#include<string>
#include<fstream>
class Person
{
private:
    std::string name;
    int age ;
public:
    void getData()
    {
        std::cout << "Enter person's name : ";
        getline(std::cin , name);
        std::cout << "Enter age : ";
        std::cin >> age;
    }
    inline void display()
    {
        std::cout << "Name : " << name << "\nAge  : " << age <<"\n";
    }
};
int main()
{
    Person object1;
    object1.getData();

    std::ofstream out;
    out.open("4.txt" , std::ios::out);
    out.write( (char*)&object1 , sizeof(object1) );
    out.close();
    std::cout << "\nWritten in file 4.txt";

    std::ifstream in;
    in.open("4.txt" , std::ios::in);
    Person object2;
    in.read( (char*)&object2 , sizeof(object2) );
    in.close();
    std::cout << "\nReading from file 4.txt and putting it in 2nd Object\nDisplaying 2nd Object :\n";
    object2.display();
}