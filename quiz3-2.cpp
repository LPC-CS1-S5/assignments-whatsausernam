#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
int main(){

  srand (time(0));
  int num1 = rand() % 10000;
  int num2 = rand() % 10000;
  int num3 = rand() % 10000;
  float sum = num1 + num2 + num3;
  float mean = sum/3;

  cout << "Numebr 1 is: " << setprecision(5) << num1 << endl;
  cout << "Number 2 is: " << num2 << endl;
  cout << "Number 3 is: " << num3 << endl;
  cout << "The sum of all these is: " << sum << endl;
  cout << "The mean of these is: " << mean << endl;



}