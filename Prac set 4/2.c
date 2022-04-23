//class for item code, cost, qty, total_price
#include<iostream>
using namespace std;
class item{
    private:
        int code;
        float cost;
        int qty;
        float total_price;
    public:
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
            cout<<"--------------------"<<endl;
            cout<<"Item code  : "<<code<<endl;
            cout<<"Item cost  : "<<cost<<endl;
            cout<<"Quantity   : "<<qty<<endl;
            cout<<"Total Price: "<<qty*cost<<endl;
        }
};
int main()
{
    int n,it=0;
    cout<<"How many items are you buying : ";
    cin>>n;
    class item i[n];
    for(;it<n;it++)
        i[it].input();
    for(it=0;it<n;it++)
        i[it].print();
}
