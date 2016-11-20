// an endless program. 
#include <iostream>
using namespace std;

int main(){
   int number;
   int total;
   for(;;){
     cout << endl << "Total is" << total;
     cout << "enter number :";
     cin >> number;
     total += number;
   }
 
} 
