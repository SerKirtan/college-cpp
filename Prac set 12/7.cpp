// Explain with the help of an example why templates are used in programming

//Its is used to reuse code , avoid function overloading and it can be use for multiple time & cases

#include <iostream>
template <typename T>

T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	std::cout << myMax<int>(3, 7) << "\n";

	std::cout << myMax<double>(3.0, 7.0) << "\n";
    
	std::cout << myMax<char>('g', 'e') << "\n";
}
