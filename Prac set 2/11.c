// C++ program for dynamic allocation
#include <iostream>
using namespace std;

class Entity{
	int* ptr;

public:
    Entity(){
		ptr = new int;
		*ptr = 123;
	}

	void display(){
		cout << *ptr << endl;
        delete(ptr);
        ptr=NULL;
	}
};

int main()
{
 Entity e1;
	e1.display();
	return 0;
}
