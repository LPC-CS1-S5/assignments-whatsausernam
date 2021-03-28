#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float radius;
  float pi = 3.14159265;
  float area;
  float length;
  float width;
  float area2;
  float base;
  float heigth;
  float area3;

  int selection;
  cout << "Which formula do you need?" << endl << endl;
  cout << "1: Area of a circle" << endl;
  cout << "2: Area of a rectangle" << endl;
  cout << "3: Volume of a triangle" << endl;
  cout << "4: None of them" << endl;
  cin >> selection;
  
  switch(selection)
  {
    case 1: cout << "Pi times radius squared" << endl;
            cout << "Please enter the radius: ";
            cin >> radius;
            area = pow(radius,2) * pi;
            cout << "The area is " << area;        
    break;
    case 2: cout << "Length times width" << endl;
            cout << "Please enter the length: ";
            cin >> length;
            cout << "Please enter the width: ";
            cin >> width;
            area2 = width * length;
            cout << "The area is " << area2;
    break;
    case 3: cout << "1/2 base times heigth" << endl;
            cout << "Please enter the base: ";
            cin >> base;
            cout << "Please enter the heigth: ";
            cin >> heigth;
            area3 = base * heigth * .5;
            cout << "The area is " << area3;
    break;
    case 4: cout << "Ok bye bye";
    break;
    default: cout << "Not good with numbers are you";
  }






}