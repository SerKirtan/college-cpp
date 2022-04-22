//Set smaller number to 0 using call by reference
#include<iostream>
using namespace std;
int zerosmaller(int &a, int &b)
{
    if(a<b)
        a=0;
    else
        b=0;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers : "<<endl;
    cin>>x>>y;
    zerosmaller(x,y);
    cout<<"New values are "<<x<<" "<<y;
}
