#include<iostream>
using namespace std;
int main(){

  int n, m;
  int result = 1;

  cout << "Enter a base: ";
  cin >> n;
  cout << "Enter an exponent: ";
  cin >> m;
  cout << result << ", ";

  for(int i=0; i<=m; i++){
    result = result * n;
    cout << result << ", ";
  }
}