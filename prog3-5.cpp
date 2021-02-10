#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main(){

  srand (time(0));
  int num1 = rand() % 100;
  int num2 = rand() % 100;
  int num3 = rand() % 100;
  float sum = num1 + num2 + num3;
  float average = sum / 3;

cout << "num1 is " << num1 << " num2 is " << num2 << " num3 is " << num3 << endl;
cout << "Added together these equal " << sum << endl;
cout << "The average of these numbers is " << setprecision(2) << fixed << average << endl;
}