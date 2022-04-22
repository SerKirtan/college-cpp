//Ascii to int and Ascii to float
#include<iostream>
using namespace std;
float convert(char a)
{
    return (float)a;
}
int convert(int a)
{
    return a;
}
int main()
{   
    cout<<convert('a')<<endl;
    cout<<convert('-');
}
