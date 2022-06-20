//Create a student with the following data members : rollno, name, marks[6], per, class
#include<iostream>
#include<string>
class Student
{
private:
    std::string name;
    int rollno , marks[6] , class_division ; 
    float percentage;
public:
    Student() : name("Unknown") , rollno(0) , class_division(0) , percentage(0) { }
    void getData()
    {
        fflush(stdin);
        std::cout << "Enter student name    : ";
        getline(std::cin , name);
        std::cout << "Enter rollno & class  : ";
        std::cin >> rollno >> class_division ;
        for(int i = 0 ; i < 6 ; i++)
        {
            std::cout << "Enter Subject-" << i+1 << " marks : ";
            std::cin >> marks[i] ;
        }
    }
    void calcPercentage()
    {
        for(int i = 0 ; i < 6 ; i++)
            percentage += marks[i];
        percentage /= 6 ;
    }
    inline void dispPercentage()
    {
        std::cout << "Percentage : "<< percentage <<"\n";
    }
    bool operator <(Student s)
    {
        if(percentage < s.percentage)
            return true;
        else
            return false;
    }
    bool operator >(Student s)
    {
        if(percentage > s.percentage)
            return true;
        else
            return false;
    }
};
int main()
{
    int size , compare1 , compare2;
    std::cout << "Enter number of students : " ;
    std::cin >> size ;
    Student s[size] ; 
    for(int i=0 ; i < size ; i++)
    {
        std::cout << "----------------------------\nEnter Student-" << i+1 << " details\n----------------------------\n";
        s[i].getData();
        s[i].calcPercentage();
    }
    std::cout << "Enter which two student's percentage you want to compare : ";
    std::cin >> compare1 >> compare2 ;
    bool temp= s[compare1-1] < s[compare2-1];

    if(compare1 <= size && compare2 <= size)
    {
        if( temp )
            std::cout << "Student-" << compare2 << " got more percentage than Student-" << compare1 << "\n";
        else    
            std::cout << "Student-" << compare1 << " got more percentage than Student-" << compare2 << "\n";
        std::cout << "Percentage of "<< compare1 << " and " << compare2 << " :\n";
        s[compare1-1].dispPercentage();
        s[compare2-1].dispPercentage();
    }
    else
        std::cout << "Invalid input";
}
