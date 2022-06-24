// Write a program to perform following operations on distance class. 1)d1 = 2.0 and 2) float m = d1
#include<iostream>
#include<string>
class Distance
{
private:
    float inputKMS;
    int kms, m;
public:
    Distance() : inputKMS(0) , kms(0) , m(0) {}
    Distance( float x ) : inputKMS(x) {}
    inline void printDetails()
    {
        std::cout << "Distance : Km = " << kms << " , m = " << m ;
    }
    void convert()
    {
        inputKMS *= 1000 ;
        kms = inputKMS/1000;
        m = (int)inputKMS % 1000;
    }
    operator float()
    {
        return ( inputKMS / 1000 );
    }
};
int main()
{
    Distance d1;
    d1=2.0;
    d1.convert();
    d1.printDetails();
    float m = d1 ; //d1.operator float()
    std::cout << "\nm = "<<m;
}
