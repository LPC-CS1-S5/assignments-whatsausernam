#include<iostream>
#include<cmath>
using namespace std;
int main(){

  int begin, end, i, prime;

  cout << "Please enter a lower bound as an integer: ";
  cin >> begin;
  cout << "Please enter an upper bound as an integer: ";
  cin >> end;

  while(begin > end || begin < 0){
    cout << "Error invalid range please reenter a valid range: " << endl;
    cout << "Begin: ";
    cin >> begin;
    cout << "End: ";
    cin >> end;
  }
  for(i = begin ; i <= end; i++){
    for(int j = 2; j <= sqrt(i); j++){
      if(i % j == 0)
        prime++;  
    }
    if(prime == 0 && i != 1){
      cout << i <<" ";
      prime = 0;
    }
    else{
      prime = 0;
    }  
  }
}