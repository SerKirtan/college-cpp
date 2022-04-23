//Set smaller number to 0 using return by reference
#include<iostream>
using namespace std;
int& zerosmaller(int &a, int &b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers : "<<endl;
    cin>>x>>y;
    zerosmaller(x,y)=0;
    cout<<"New values are "<<x<<" "<<y;
}
