#include <iostream>
using namespace std;
int main(){

//assign my variables
int amountSold = 0;
int normalPrice = 0;
double discountAmount = 0;
double salePrice = 0;
double discountRate =0;

//prompt user to enter amount bought
cout << "How many units do you want to buy?" << endl;
cin >> amountSold;
normalPrice = 99 * amountSold;

//check if it is greater than zero number
if (amountSold >= 0){
  if(amountSold < 10){
    discountRate = 0;
  }
  else if(amountSold < 20){
    discountRate = .2;
  }
  else if(amountSold < 50){
    discountRate = .3;
  }
  else if(amountSold < 100){
    discountRate = .4;
  }
  else if(amountSold > 99){
    discountRate = .5;
  }
  discountAmount = normalPrice * discountRate;
  salePrice = normalPrice - discountAmount;
  cout << "Normal Price:$" << normalPrice << endl;
  cout << "Discount Amount:$" << discountAmount << endl;
  cout << "Sale Price:$" << salePrice << endl;
}
else{
  cout << "Number bought has to be greater than zero" << endl;
}







}