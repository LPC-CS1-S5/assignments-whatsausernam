#include <iostream>
#include <cmath>
using namespace std;

int main(){

  double test1, test2, test3;
  double testAverage;
  cout << "Please enter your first test score." << endl;
  cin >> test1;
  cout << "Please enter your second test score." << endl;
  cin >> test2;
  cout << "Please enter your third test score." << endl;
  cin >> test3;
  testAverage = (test1 + test2 + test3) / 3;
  cout << "Your average score is " << testAverage << "." << endl;

  

}