//Swap values using call by Value, call by address and swap by reference 
#include <iostream>
using namespace std;
void swapByValue(int a,int b)
{
    int t=b;
    b=a;
    a=t;
    cout << "Value of A after swapping: " << a <<endl;
    cout << "Value of B after swapping: " << b <<endl;
}
void swapByReference(int &m, int &n){
    int temp= m;
    m=n;
    n=temp;
}
void swapByAddress(int *p, int *q){
    int temp= *p;
    *p=*q;
    *q=temp;
}
 
int main()
{
    int a,b;
    
    cout << "Enter two numbers A & B"<< endl;
    cin >> a >> b;
    cout<< "Swap by value : "<<endl;
    swapByValue(a,b);
    cout << "Swap by Reference : "<<endl;
    swapByReference(a,b);
    cout << "Value of A after swapping: " << a <<endl;
    cout << "Value of B after swapping: " << b <<endl;
    cout<< "Swap by address : "<<endl;
    swapByAddress(&a,&b);
    cout << "Value of A after swapping: " << a <<endl;
    cout << "Value of B after swapping: " << b <<endl;

}
