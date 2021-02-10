#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  float celcius, farenheit = 0;

cout << "What is the temperature in Celcius?" << endl;
cin >> celcius;
farenheit = celcius * (1.8) + 32;
cout << celcius << " degrees celcius is " << farenheit << " degrees farenheit." << endl;
}