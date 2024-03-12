#include <iostream>
using namespace std;
// Driver code
int main()
{
	int a = 2, b = 3;

	cout << "Before swapping a = " << a << " , b = " << b
		<< endl;

	// applying algorithm
	b = a + b;
	a = b - a;
	b = b - a;

	cout << "After swapping a = " << a << " , b = " << b
		<< endl;
	return 0;
}
