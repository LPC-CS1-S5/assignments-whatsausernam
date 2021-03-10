#include<iostream>
#include<fstream>
using namespace std;
int main()
{

  ifstream ifs;
  int num, i;

  ifs.open("data.txt");

  for(;;){

    
    ifs >> num;
    if(ifs.eof())
      break;
    cout << num << " was read from the file.";
  }

  ifs.close();
}