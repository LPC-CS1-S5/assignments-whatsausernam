#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  

  int males, females = 0;
  float percentMales, percentFemales = 0;
  float total = 0;

cout << "How many males are there?" << endl;
cin >> males;  
cout << "How many females are there?" << endl;
cin >> females;
total = males + females;
percentMales = males / total * 100;
percentFemales = females / total * 100;
cout << "The percentage of males is " << percentMales << " %" << endl;
cout << "THe percentage of females is " << percentFemales << " %" << endl;

}