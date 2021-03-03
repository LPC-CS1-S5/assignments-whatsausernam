#include <iostream>
using namespace std;
int main()
{
  int selection;
  cout << "Which formula do you wnat to see?" << endl << endl;
  cout << "1: Area of a circle" << endl;
  cout << "2: Area of a rectangle" << endl;
  cout << "3: Volume of a cylinder" << endl;
  cout << "4: None of them" << endl;
  cin >> selection;
  
  switch(selection)
  {
    case 1: cout << "Pi times radius squared";
    break;
    case 2: cout << "Length times width";
    break;
    case 3: cout << "Pi times radius squared times heigth";
    break;
    case 4: cout << "Ok bye bye";
    break;
    default: cout << "Not good with numbers are you";
  }






}