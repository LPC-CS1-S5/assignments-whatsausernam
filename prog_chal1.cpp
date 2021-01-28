//all my basic program set up
#include <iostream>
#include <iomanip>
using namespace std;

//where i begin the actual code
int main(){

//setting all my variables
  double mealCost;
  double tax;
  double tip;
  double total;
  mealCost = 88.67;
  tax = mealCost * .0675;
  tip = mealCost * .2;
  total = mealCost + tax + tip;


cout << "Your food is $" << mealCost << endl;
cout << "The tax is $" << setprecision(3) << tax << endl;
cout << "A 20% tip will be $" << setprecision(4) << tip << endl;
cout << "In total you owe $" << setprecision(5) << total << endl;

}