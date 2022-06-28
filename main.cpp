// Hoppock, Zachary
// squaresLoop.cpp
// Oct. 10, 2020
// Print all squares less than a given value
// Version # 1
#include <iostream>

using namespace std;
int main()
{
cout << "Please give a numeric value: ";
int n;
cin >> n;

int i = 0;

cout << "Here are all the squared values that are less than " << n << ":" << endl;
while (i*i < n)
{ 
  cout << i*i << endl;
  i++;
}

return 0;
}