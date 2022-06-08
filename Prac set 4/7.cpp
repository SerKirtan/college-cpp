// C++ program to Count the number of objects
#include <iostream>
using namespace std;
class countObj{
	int num;
	static int count;

public:
	countObj()
	{
	num = ++count;
	}
	~countObj()
	{
	--count;
	}
	static void printCount()
	{
		cout << "count:" << count<< "\n";
	}
};
int countObj::count;
int main()
{
	countObj t1, t2;
	countObj::printCount();

	countObj t3;
	countObj::printCount();
	return 0;
}
