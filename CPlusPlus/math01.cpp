// addition in C++
#include <iostream>

int cars = 7;         // number of cars on the road
int bikes = 3;        // number of bikes on the road
int all = 0;          // number of all vehicles

int main()
{
  all = cars + bikes                                          // Add the value of 'cars' and 'bikes' to 'all', Default is 10
  std::cout << "There is " + all +" vehicles in on the road"; // To print "There is 10 vehicles in on the road"
  return 0;                                                   
}
