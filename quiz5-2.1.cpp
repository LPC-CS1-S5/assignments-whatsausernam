#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){

  srand(time(0));
  int num1 = rand() % 100;
  int num2 = rand() % 100;
  int num3 = rand() % 100;
  int num4 = rand() % 100;
  int num5 = rand() % 100;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  cout << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5;

  if(num1 <= num2 & num1 <= num3 & num1 <= num4 & num1 <= num5){
    cout<< num1;
  }
  else if(num2 < num1 & num2 < num3 & num2 < num4 & num2 < num5){
    cout << num2 << is;
=======
=======
>>>>>>> origin/main
=======
>>>>>>> origin/main
	// Tips:
	// Use the for loop to make 5 iteration
	// use the variable "min" to assume the current min value

	// Insdie the loop
	// if the next random is less than "min",
	// the value of "min" should be that value.


  cout << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << ": ";

  if(num1 <= num2 & num1 <= num3 & num1 <= num4 & num1 <= num5){
    cout<< num1 << " is smallest";
  }
  else if(num2 < num1 & num2 < num3 & num2 < num4 & num2 < num5){
    cout << num2 << " is smallest";
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> origin/main
=======
>>>>>>> origin/main
=======
>>>>>>> origin/main
  }
  else if(num3 < num1 & num3 < num2 & num3 < num4 & num3 < num5){
    cout << num3 << " is smallest";
  }
  else if(num4 < num1 & num4 < num2 & num4 < num3 & num4 < num5){
    cout << num4 << " is smallest";
  }
  else if(num5 < num1 & num5 < num2 & num5 < num3 & num5 < num4){
    cout << num5 << " is smallest";
  }
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
  else{
    cout << "one or more number is equal.";
  }
>>>>>>> origin/main
=======
  else{
    cout << "one or more number is equal.";
  }
>>>>>>> origin/main
=======
  else{
    cout << "one or more number is equal.";
  }
>>>>>>> origin/main
}