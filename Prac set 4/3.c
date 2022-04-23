//claa book : bookname, authorname, rate, qty 
#include<iostream>
#include<string>
using namespace std;
class book{
    private:
        string bname;
        string aname;
        float rate;
        int qty;
    public:
        int input()
        {
            fflush(stdin);
            cout<<"------------------------------"<<endl;
            cout<<"Enter Book name : ";
            getline(cin,bname);
            cout<<"Enter Author name  : ";
            getline(cin,aname);
            cout<<"Enter rate and quantity  : ";
            cin>>rate>>qty;
        }
        int print()
        {
            cout<<"--------------------------"<<endl;
            cout<<"Book name        : "<<bname<<endl;
            cout<<"Author name      : "<<aname<<endl;
            cout<<"Book price       : "<<rate<<endl;
            cout<<"Quantity         : "<<qty<<endl;
            cout<<"Total Item Price : "<<qty*rate<<endl;
        }
        inline int totalP(float &sum)
        {
            sum+=qty*rate;
        }
};
int main()
{
    int n,it=0;
    float total_price=0;
    cout<<"How many books are you buying : ";
    cin>>n;
    class book b[n];
    for(;it<n;it++)
        b[it].input();
    for(it=0;it<n;it++)
    {
        b[it].print();
        b[it].totalP(total_price);
    }
    cout<<"Your total bill is of "<<total_price<<" Rs";
}
