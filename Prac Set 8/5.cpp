#include<iostream>
#include<string>
class Publication
{
protected:
    std::string title;
    float price;
public:
    Publication() : title("Unknown") , price(0) {}
    void getData()
    {
        fflush(stdin);
        std::cout << "Enter title : ";
        getline(std::cin , title);
        std::cout << "Enter price : ";
        std::cin >> price ;
    }
    inline void display()
    {
        std::cout << "\n\nTitle : " << title << "\nPrice : " << price << "\n";
    }
};
class Book : public Publication
{
private:
    int page_count;
public:
    Book() : page_count(0) {}
    void getData()
    {
        Publication::getData();
        std::cout << "Enter number of pages : ";
        std::cin >> page_count ;
    }
    void display()
    {
        Publication::display();
        std::cout << "Number of pages : " << page_count << "\n";
    }
};
class Tape :public Publication
{
private:
    float mins;
public:
    Tape() : mins(0) {}
    void getData()
    {
        Publication::getData();
        std::cout << "Enter Tape length [Mins] : ";
        std::cin >> mins ;
    }
    void display()
    {
        Publication::display();
        std::cout << "Tape length in mins : " << mins << "\n";
    }
};
int main()
{
    Book bookObj;
    Tape tapeObj;
    bookObj.getData();
    tapeObj.getData();
    bookObj.display();
    tapeObj.display();
}
