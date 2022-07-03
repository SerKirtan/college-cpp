//Ascii to int and Ascii to float
#include<iostream>
using namespace std;
float convert(char a , float x)
{
    return (float)a;
}
int convert(char a)
{
    return (int)a;
}
int main()
{   
    cout<<convert('1' , 1.1)<<endl;
    cout<<convert('2');
}