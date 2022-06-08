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
    void displayData()
    {
        std::cout << "Name    : " << name << "\n";
        std::cout << "Class   : " << class_division << "\n";
        std::cout << "Roll no : " << rollno << "\n";
        for( int i = 0 ; i < 6 ; i++)
            std::cout << " Subject-" << i+1 << " :" << marks[i] << "/100\n";
        std::cout << " Percentage : " << percentage << "\n";
    }
    void calcPercentage()
    {
        for(int i = 0 ; i < 6 ; i++)
            percentage += marks[i];
        percentage /= 6 ;
    }
    void sortByPercentage( Student s[] , int size )
    {
        Student temp;
        for(int i = 0 ; i < (size-1) ; i++ )
            for( int j = i+1 ; j < size ; j++)
                if( s[i].percentage < s[j].percentage)
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
    }
};
int main()
{
    int size;
    std::cout << "Enter number of students : " ;
    std::cin >> size ;
    Student s[size] ; 
    for(int i=0 ; i < size ; i++)
    {
        std::cout << "----------------------------\nEnter Student-" << i+1 << " details\n----------------------------\n";
        s[i].getData();
        s[i].calcPercentage();
    }
    s[0].sortByPercentage(s, size);
    for(int i=0 ; i < size ; i++)
    {
        std::cout << "----------------------------\nStudent-" << i+1 << " details\n----------------------------\n";
        s[i].displayData();
    }
}
