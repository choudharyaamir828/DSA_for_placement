#include <iostream>
using namespace std;

class Test {
	int value;

public:
	Test(int v = 0)
	 { 
	 	value = v;
	 }

	int getValue(int v=0) const
	{
	  	return value; 
	  }
};

int main()
{
	Test t(344);
	cout << t.getValue();
	return 0;
}

