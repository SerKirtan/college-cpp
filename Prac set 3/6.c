//Power of a number [number is double], default power is 2
#include<iostream>
using namespace std;
double power(double m, int n = 2)
{
    double resl=1;
    for(int i=0;i<n;i++)
        resl*=m;
    return resl;
}
int main()
{   double num;
    int pow;
    char ch;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Do you want to enter a power [y/n]"<<endl;
    cin>>ch;
    if(ch=='y'){
        cout<<"Enter power of "<<num<<endl;
        cin>>pow;
        cout<<power(num,pow)<<" is the result";
    }
    else{
        cout<<power(num)<<" is the result";
    }
}
