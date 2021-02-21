#include <iostream>
using namespace std;
int main()
{

int a, b, c = 0;

//start by getting the numbers in
cout << "Please enter three integers non-equal integers into the system:" << endl;
cin >> a >> b >> c;

//make the logic for the program
if (a > b) {
    if (b > c) {
        cout << a << " is biggest and " << c << " is smallest" << endl;
        cout << c << ", " << b << ", " << a << endl;
              
    } else {
        cout << a << " is biggest and " << b << " is smallest" << endl;
        cout << b << ", " << c << ", " << a << endl;
    }
} else if (b > c) {
    if (a > c) {
        cout << b << " is biggest and " << c << " is smallest" << endl;
        cout << c << ", " << a << ", " << b << endl;
    } else {
        cout << b << " is biggest and " << a << " is smallest" << endl;
        cout << a << ", " << c << ", " << b << endl;
    }               
} else {
    if (a > b) {
        cout << c << " is biggest and " << b << " is smallest" << endl;
        cout << b << ", " << a << ", " << c << endl;
    } else {
        cout << c << " is biggest and " << a << " is smallest" << endl;
        cout << a << ", " << b << ", " << c << endl;
    }
}


}