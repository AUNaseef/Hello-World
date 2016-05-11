// Math with user input
#include <iostream>
using namespace std;

int main(){
   int value1;
   int value2;
   int sum;
   
   cout << "Please enter a number" << endl;
   cin >> value1;
   cout << endl << "Please enter another number" << endl;
   cin >> value2;
   sum = value1 + value2;
   cout << "sum of all values you entered is" << sum;

   return 0;
} 
