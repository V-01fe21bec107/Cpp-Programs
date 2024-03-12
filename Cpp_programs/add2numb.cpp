#include <iostream> 
using namespace std; 

int addTwoNumber(int A, int B) 
{ 
	// Return sum of A and B 
	return A + B; 
} 

int main() 
{ 
	// Given two number 
	int A = 4, B = 11; 

	// Function call 
	cout << "sum = " << addTwoNumber(A, B); 
	return 0; 
}
