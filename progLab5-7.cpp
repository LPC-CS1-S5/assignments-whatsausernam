#include <iostream>
using namespace std;
int main()
{
  int n, i, num = 0;
  int nthPower = 1;
  float inverseNthPower;

  cout << "Please enter an integer into the sytem:";
  cin >> n;

  if(n > 0){
    num = n;
  }
  else if(n < 0){
    num = n * -1;
  }
  else{
    cout << "2 to the " << n << " is " << nthPower;
    return 0;
  }

  for(i=0; i<num; i++){
    nthPower *= 2;
  }

  if(n < 0){
    inverseNthPower = 1.0 / nthPower;
    cout << "2 to the " << n << " is " << inverseNthPower << endl;
  }
  else{
    cout << "2 to the " << n << " is " << nthPower << endl;
  }
  

}