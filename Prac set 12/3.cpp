//What is an exception? What are the advantages of using exception handling in a program? 
//Illustrate C++ exception handling mechanism.


// A C++ exception is a response to an exceptional circumstance that arises while a program is running, 
//such as an attempt to divide by zero.
// Exceptions provide a way to transfer control from one part of a program to another. 
//C++ exception handling is built upon three keywords: try, catch, and throw.
// throw − A program throws an exception when a problem shows up. This is done using a throw keyword.
// catch − A program catches an exception with an exception handler at the place in a program where you want to handle the problem. 
//The catch keyword indicates the catching of an exception.
// try − A try block identifies a block of code for which particular exceptions will be activated. 
//It's followed by one or more catch blocks.

#include <iostream>

double division(int a, int b) 
{
    if( b == 0 )
        throw "Division by zero condition!";
    return (a/b);
}

int main () 
{
    int x = 50;
    int y = 0;
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
}