#include <iostream>
double division(int a, int b) 
{
    if( b == 0 )
        throw "Division by zero condition!";
    else if( a == 0)
        throw(a);
    return (a/b);
}

int main () 
{
    int x = 0;
    int y = 40;
    double z = 0;
 
    try 
    {
        z = division(x , y);
        std::cout << z << "\n";
    }
    catch (const char* msg) 
    {
        std::cerr << msg << "\n";
    }
    catch (int x)
    {
        std::cout << "Numerator is 0";
    }
}