//Print characters using function ovefloading
#include<iostream>
using namespace std;
int print(char a){
    cout<<a<<endl;
}
int print(char a,char b){
    cout<<a<<" "<<b<<endl;
}
int main()
{
    print('a');
    print('b','c');
}
