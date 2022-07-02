//What is Copy Constructor? Explain with example

// Ans :- A Copy constructor is an overloaded constructor used to declare and initialize an object from another object.

#include<iostream> 
class Test
{ 
private:
    int x;
public:
    Test(int num) : x(num) {}
    Test(Test &tt)
    {
        x = tt.x;
    }
    inline void display()
    {
        std::cout << "X = " << x ;
    }
}; 

int main() 
{ 
    Test ob1(67);
    Test ob2(ob1);
    ob2.display();
} 