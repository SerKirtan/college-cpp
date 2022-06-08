//Catalog : membersTitle, author, year_of_publication, no_of_copies.
#include<iostream>
#include<string>
class Catalog
{
private:
    std::string membersTitle, author;
    int year_of_publication, no_of_copies;
public:
    Catalog() : membersTitle("Unknown") , author("Unknown") , year_of_publication(0) , no_of_copies(0) {}
    void getData()
    {
        fflush(stdin);
        std::cout<<"Enter members title : ";
        getline(std::cin,membersTitle);
        std::cout<<"Author name         : ";
        getline(std::cin,author);
        std::cout<<"Year of publication : ";
        std::cin>>year_of_publication;
        std::cout<<"Numbet of copies    : ";
        std::cin>>no_of_copies;
    }
    void displayData()
    {
        std::cout<<"Enter members title : "<<membersTitle<<std::endl;
        std::cout<<"Author name         : "<<author<<std::endl;
        std::cout<<"Year of publication : "<<year_of_publication<<std::endl;
        std::cout<<"Number of copies    : "<<no_of_copies<<std::endl;
    }
    void searchTitle(std::string& temp)
    {
        if(!(temp.compare(membersTitle)))
            displayData();
    }
};

int main()
{
    int size;
    std::string compare;
    std::cout<<"Enter how many catalog data you want to enter : ";
    std::cin>>size;
    Catalog catalog[size];
    for(int i=0;i<size;i++)
    {
        std::cout<<"-----------------------\n";
        std::cout<<"Enter catalog-"<<i+1<<" details\n";
        catalog[i].getData();
    }
    for(int i=0;i<size;i++)
    {
        std::cout<<"-----------------------\n";
        std::cout<<"Catalog-"<<i+1<<" details\n";
        catalog[i].displayData();
    }
    std::cout<<"--------------------------------------------\nWhich title you want to search for ? -> ";
    fflush(stdin);
    getline(std::cin,compare);
    for(int i=0;i<size;i++)
        catalog[i].searchTitle(compare);
}
