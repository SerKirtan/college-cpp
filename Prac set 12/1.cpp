// What is this pointer? Write a complete program to illustrate the use of this pointer

// ANS : Every object in C++ has access to its own address through an important pointer called this pointer. 
//The this pointer is an implicit parameter to all member functions. 
//Therefore, inside a member function, this may be used to refer to the invoking object.

#include<iostream>

class Test
{
private:
    int x;
public:
    void setX (int x)
    {
	    this->x = x;
    }
    void print() { std::cout << "x = " << x << "\n"; }
};

int main()
{
    Test obj;
    int x ;
    std::cout << "Enter num : ";
    std::cin >> x ;
    obj.setX(x);
    obj.print();
    return 0;
}
