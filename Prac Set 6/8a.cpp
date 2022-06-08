//Rewrite assignment 1&2(from assignment 6) using +=,-=, *= & /=operator overloading.
#include<iostream>
class Complex
{
private:
    double real,imaginary;
public:
    Complex(double r=0,double i=0)
    {
        real=r;
        imaginary=i;
    }
    void getData()
    {
        std::cout << "Enter real part of number      : ";
        std::cin >> real;
        std::cout << "Enter imaginary part of number : ";
        std::cin >> imaginary;
    }
    void operator +=(int &x)
    {
        real += x;
        imaginary += x;
        print();
    }
    void operator -=(int &x)
    {
        real -= x;
        imaginary -= x;
        print();
    }
    void operator *=(int &x)
    {
        real *= x;
        imaginary *= x;
        print();
    }
    void operator /=(int &x)
    {
        real /= x;
        imaginary /= x;
        print();
    }
    inline void print()
    {
        std::cout<<real<<" + "<<imaginary<<"i\n";
    }
};
int main()
{
    int num;
    Complex c1 , temp;
    c1.getData();
    std::cout << "Inputed complex number : ";
    c1.print();
    std::cout << "Enter a number to add : ";
    std::cin >> num ;
    temp=c1;
    temp+=num;
    std::cout << "Enter a number to subtract : ";
    std::cin >> num ;
    temp=c1;
    temp-=num;
    std::cout << "Enter a number to multiply : ";
    std::cin >> num ;
    temp=c1;
    temp*=num;
    std::cout << "Enter a number to divide : ";
    std::cin >> num ;
    temp=c1;
    temp/=num;
}
