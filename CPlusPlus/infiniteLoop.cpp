// an endless program. 
#include <iostream>
using namespace std;

int main(){

   // Variables
   int number = 0;
   int total = 0;

   // For Loop
   for(;;){
     cout << endl << "Total is " << total;
     cout << endl << "enter number : ";

     cin >> number;
     total += number;
   }
}
