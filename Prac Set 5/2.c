#include<iostream>
#include<string>
#include<algorithm>
class Book
{
    private:
        std::string book_name;
        std::string authour_name;
        float rate,item_total;
        int qty;
    public:
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
            std::cout<<"Total Item Price : "<<item_total<<std::endl;
        }
        void sort(Book b[],int& counter)
        {
            Book temp;
            for(int j=0 ; j<counter ; j++)
            {
                for(int k=j+1 ; k<counter ; k++)
                {
                    if(b[j].item_total<b[k].item_total)
                    {
                        temp=b[j];
                        b[j]=b[k];
                        b[k]=temp;
                    }
                }
            }
        }
        inline void totalP(float &sum)
        {
            sum+=item_total;
        }
};
int main()
{
    int size;
    float total_price=0;
    std::cout<<"How many books are you buying : ";
    std::cin>>size;
    
    Book b[size];
    
    for(int it=0;it<size;it++)
        b[it].input();    

    for(int it=0;it<size;it++)
        b[it].sort(b,size);
    
    for(int it=0;it<size;it++)
    {
        b[it].print();
        b[it].totalP(total_price);
    }
    std::cout<<"------------------\nYour total bill is of "<<total_price<<" Rs\n";
}
