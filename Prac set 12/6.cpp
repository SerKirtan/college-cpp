//Generic programming :- https://www.geeksforgeeks.org/generics-in-c/#:~:text=Generic%20Programming%20enables%20the%20programmer,integer%2C%20string%20or%20a%20character.&text=Once%20written%20it%20can%20be%20used%20for%20multiple%20times%20and%20cases.

#include<iostream>

template <class T>
void swap(T& p , T& q)
{
    T temp = p;
    p = q;
    q = temp;
}
int main()
{
    int a , b ;
    float c , d ;
    std::cout << "Enter 2 int numbers   : ";
    std::cin >> a >> b;
    std::cout << "Enter 2 float numbers : ";
    std::cin >> c >> d;
    swap(a , b);
    swap(c , d);
    std::cout << "\nInt numbers after swapping   : " << a << " " << b ;
    std::cout << "\nFloat numbers after swapping : " << c << " " << d ;
}