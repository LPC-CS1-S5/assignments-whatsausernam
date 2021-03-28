#include <iostream>
#include <iomanip>
using namespace std;
int main(){

  int weight;
  int milesShipped;
  float rate;
  float totalCost;

  cout << "How much does your packege weight: ";
  cin >> weight;

  if(weight < 0){
    cout << "error, must have posotive weight.";
  }
  else if(weight < 2){
    rate = 1.10;
  }
  else if(weight < 6){
    rate = 2.20;
  }
  else if(weight < 10){
    rate = 3.70;
  }
  else if(weight < 20){
    rate = 4.80;
  }
  else{
    cout << "Maximum shipping weigth is 20 kg.";
  }

  cout << "Enter how far in miles we are shipping your package: ";
  cin >> milesShipped;

  if(milesShipped < 0){
    cout << "error, must ship more than 0 miles";
  }
  else if(milesShipped < 3001){
    totalCost = (milesShipped / 500) * rate;
    cout << setprecision(3) "The cost to ship your package is $" << totalCost;
  }
  else{
    cout << "Error, must be under 3000 miles.";
  }
}