#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double regularPrice = 59.95;
  double discountAmount = regularPrice * 0.2;
  double salePrice = regularPrice - discountAmount;


cout << "Regular Price: $" << regularPrice << endl;
cout << "Discount Amount: $" << setprecision(4) << discountAmount << endl;
cout << "Sale Price: $" << salePrice << endl;




}