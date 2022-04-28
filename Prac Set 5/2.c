#include<iostream>
#include<string>
#include<algorithm>
class book
{
    private:
        std::string book_name;
        std::string authour_name;
        float rate,item_total;
        int qty;
    public:
        book()
        {
            std::cout<<"Object created\n";
        }
        ~book()
        {
            std::cout<<"Object destroyed\n";
        }
        void input()
        {
            fflush(stdin);
            std::cout<<"------------------------------"<<std::endl;
            std::cout<<"Enter Book name : ";
            getline(std::cin,book_name);
            std::cout<<"Enter Author name  : ";
            getline(std::cin,authour_name);
            std::cout<<"Enter rate and quantity  : ";
            std::cin>>rate>>qty;
            item_total=rate*qty;
        }
        void print()
        {
            std::cout<<"--------------------------"<<std::endl;
            std::cout<<"Book name        : "<<book_name<<std::endl;
            std::cout<<"Author name      : "<<authour_name<<std::endl;
            std::cout<<"Book price       : "<<rate<<std::endl;
            std::cout<<"Quantity         : "<<qty<<std::endl;
            std::cout<<"Total Item Price : "<<rate*qty<<std::endl;
        }
        inline void totalP(float &sum)
        {
            sum+=qty*rate;
        }
        static bool comp(const book& lhs, const book& rhs)
        {
            return lhs.item_total > rhs.item_total;
        }
};
int main()
{
    int size;
    float total_price=0;
    std::cout<<"How many books are you buying : ";
    std::cin>>size;
    
    class book b[size];
    
    for(int it=0;it<size;it++)
        b[it].input();
    
    std::sort(b, b+size, book::comp);
    
    for(int it=0;it<size;it++)
    {
        b[it].print();
        b[it].totalP(total_price);
    }
    std::cout<<"Your total bill is of "<<total_price<<" Rs\n";
}
