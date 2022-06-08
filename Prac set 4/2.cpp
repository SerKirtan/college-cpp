//class for item code, cost, qty, total_price
#include<iostream>
using namespace std;
class item{
    private:
        int code;
        float cost;
        int qty;
    public:
        item() : code(0), cost(0), qty(0) {}
        int input()
        {
            cout<<"Enter Item code : ";
            cin>>code;
            cout<<"Enter the cost  : ";
            cin>>cost;
            cout<<"Enter quantity  : ";
            cin>>qty;
        }
        int print()
        {
            cout<<"--------------------------"<<endl;
            cout<<"Item code        : "<<code<<endl;
            cout<<"Item cost        : "<<cost<<endl;
            cout<<"Quantity         : "<<qty<<endl;
            cout<<"Total Item Price : "<<qty*cost<<endl;
        }
        inline int totalP(float &sum)
        {
            sum+=qty*cost;
        }
};
int main()
{
    int n,it=0;
    float total_price=0;
    cout<<"How many items are you buying : ";
    cin>>n;
    class item i[n];
    for(;it<n;it++)
        i[it].input();
    for(it=0;it<n;it++)
    {
        i[it].print();
        i[it].totalP(total_price);
    }
    cout<<"Your total bill is of "<<total_price<<" Rs";
}
