#include <iostream>
using namespace std;

int main(){

  double normalWork = 40;
  double overTime = 10;
  double wageNormal = 18.25;
  double wageOver = 27.78;
  double regularPay = wageNormal * normalWork;
  double overPay = wageOver * overTime;
  double totalPay = overPay + regularPay;

  

cout << "Employees total wages earned are $" << totalPay << endl; 


}