// getting user input in c++
#include <iostream>
using namespace std;			// don't need to type 'std::' anymore.

int numA;
int numB;
int total;

int main()
{
	cout << "Enter two numbers and get total" << endl;
	
	cout << endl								// 'endl' is End Line, That starts a new line
	<< "Enter a number: ";
	cin >> numA;								// Assign user input to variable 'numA'

	cout << endl
	<< "Enter another number: ";
	cin >> numB;

	total = numA + numB;						// add the two numbers to variable 'total'
	cout << endl << "The total of two numbers you entered is " << total;
}
