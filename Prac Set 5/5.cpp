//Real and imaginary :- Add , Sub , Mult & Div
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
    Complex add(Complex c)
    {
        Complex Add;
        Add.real = real + c.real;
        Add.imaginary = imaginary + c.imaginary;
        return Add;
    }
    Complex sub(Complex c)
    {
        Complex Sub;
        Sub.real = real - c.real;
        Sub.imaginary = imaginary - c.imaginary;
        return Sub;
    }
    Complex mult(Complex c)
    {
        Complex Mult;
        Mult.real = real*c.real - imaginary*c.imaginary;
        Mult.imaginary = real*c.imaginary + imaginary*c.real;
        return Mult;
    }
    Complex div(Complex c)
    {
        Complex Div;
        Div.real = (real*c.real + imaginary*c.imaginary) / (c.real*c.real + c.imaginary*c.imaginary);
        Div.imaginary = (imaginary*c.real - real*c.imaginary) / (c.real*c.real + c.imaginary*c.imaginary);
        return Div;
    }
    inline double getReal()
    {
        return real;
    }
    inline double getImaginary()
    {
        return imaginary;
    }
    void print()
    {
        std::cout<<real<<"+"<<imaginary<<"i\n";
    }
};

int main()
{
    double real1 , real2 , imaginary1 , imaginary2;

    std::cout << "Enter real part of 1st number :- ";
    std::cin >> real1;
    std::cout << "Enter imaginary part of 1st number :- ";
    std::cin >> imaginary1;
    Complex c1(real1,imaginary1);
    c1.print();

    std::cout << "Enter real part of 2nd number :- ";
    std::cin >> real2;
    std::cout << "Enter imaginary part of 2nd number :- ";
    std::cin >> imaginary2;
    Complex c2(real2,imaginary2);
    c2.print();

    Complex temp;
    temp = c1.add(c2);
    std::cout<<"Addition is       : (" << temp.getReal() << ") + (" << temp.getImaginary() << ")i\n";
    temp = c1.sub(c2);
    std::cout<<"Subtraction is    : (" << temp.getReal() << ") + (" << temp.getImaginary() << ")i\n";
    temp = c1.mult(c2);
    std::cout<<"Multiplication is : (" << temp.getReal() << ") + (" << temp.getImaginary() << ")i\n";
    temp = c1.div(c2);
    std::cout<<"Division is       : (" << temp.getReal() << ") + (" << temp.getImaginary() << ")i\n";
}
