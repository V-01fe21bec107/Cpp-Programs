#include <iostream>
using namespace std;

float Conversion(float n)
{
	return (n*9/5) +32;
}

// Driver code
int main()
{
	float n = 40;
	cout << Conversion(n);
	return 0;
}
