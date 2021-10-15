// C++ program to show how to call parameterised Constructor
// of base class when derived class's Constructor is called

#include <iostream>
using namespace std;

// base class
class Parent {
	int x;

public:
	// base class's parameterised constructor
	Parent(int i)
	{
		x = i;
		cout << "Inside base class's parameterised "
				"constructor"
			<< endl;
	}
};

// sub class
class Child : public Parent 
{
	int j;

public:
	// sub class's parameterised constructor
	Child(int x): Parent(j), j(x)
	{
		cout << "Inside sub class's parameterised "
				"constructor"
			<< endl;
	}
};

// main function
int main()
{

	// creating object of class Child
	Child obj1(10);
	return 0;
}
