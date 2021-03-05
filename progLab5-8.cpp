#include <iostream>
#include <cmath>
using namespace std;
int main(){

  int begin, end, i, j;

  cout << "Please choose a positive integer or 0 for the lower bound: ";
  cin >> begin;
  cout << "Please choose a posotive integer larger than the lower bound: ";
  cin >> end;

  while(begin < 0 || end > 1300){
    cout << "One or more of the bounds is invalid. Please try again: ";
    cin >> begin;
    cout << ": ";
    cin >> end;
  }

  j = round(log2(begin));

  if(pow(2, j) > end){
    cout << "There are no squares of 2 within your bounds.";
  }
  else{
    for(i = round( log2(begin)); (pow(2,i) < end); i++){
    cout << pow(2,i) << ", ";
    } 
  }
  
    

  

  
return 0;
}