#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int ticketSoldA, ticketSoldB, ticketSoldC = 0.00;
  int ticketPriceA = 15;
  int ticketPriceB = 12;
  int ticketPriceC = 9;

cout << "How many Class A tickets were sold?" << endl;
cin >> ticketSoldA;
cout << "How many Class B tickets were sold?" << endl;
cin >> ticketSoldB;
cout << "How many Class C tickets were sold?" << endl;
cin >> ticketSoldC;
double income = 1.00 * ticketSoldA + ticketSoldB + ticketSoldC;
cout << "In total you made $" << setprecision(2) << fixed << income << " in profit." << endl;


}