//class book : bookname, authorname, rate, qty 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
static float max=0.0;
static int count=0;
class book{
    private:
        string bname;
        string aname;
        float rate;
        int qty;
    public:
    float item_total;
    book(){
        cout<<"Object created\n";
    }
    ~book(){
        cout<<"Object destroyed\n";
    }
        int input(){
            fflush(stdin);
            cout<<"------------------------------"<<endl;
            cout<<"Enter Book name : ";
            getline(cin,bname);
            cout<<"Enter Author name  : ";
            getline(cin,aname);
            cout<<"Enter rate and quantity  : ";
            cin>>rate>>qty;
            item_total=rate*qty;
        }
        int print(){
            fflush(stdin);
            cout<<"--------------------------"<<endl;
            cout<<"Book name        : "<<bname<<endl;
            cout<<"Author name      : "<<aname<<endl;
            cout<<"Book price       : "<<rate<<endl;
            cout<<"Quantity         : "<<qty<<endl;
            cout<<"Total Item Price : "<<rate*qty<<endl;
        }
        inline int totalP(float &sum){
            sum+=qty*rate;
        }
};
bool comp(const book& lhs, const book& rhs){
            return lhs.item_total > rhs.item_total;
        }
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
        b[it].totalP(total_price);
    sort(b, b+n, comp);
    for(it=0;it<n;it++)
        b[it].print();
    cout<<"Your total bill is of "<<total_price<<" Rs\n";
}
