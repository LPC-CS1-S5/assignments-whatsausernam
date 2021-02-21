#include <iostream>
#include <string>
using namespace std;

int main(){

  string month1, month2, month3;
  float fall1, fall2, fall3, average = 0;

cout << "Enter a month and how much rain fell during it:" << endl;
cin >> month1;
cin >> fall1;
cout << "Enter a second month and how much rain fell during it:" << endl;
cin >> month2;
cin >> fall2;
cout << "Enter a third month and how much rain fell duing it:" << endl;
cin >> month3;
cin >> fall3;

  average = (fall1 + fall2 + fall3) / 3;

cout << "The average rain fall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches." << endl; 
}