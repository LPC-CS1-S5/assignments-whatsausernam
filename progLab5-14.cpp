#include<iostream>
#include<ctime>
#include<fstream>
using namespace std;
int main()
{
  ofstream ofs;
  int N, i;
  int rdnum;

  unsigned seed = time(0);
  srand(seed);

  cout << "Please enter the # of random numbers: ";
  cin >> N;
  ofs.open("data.txt");
  if(ofs.fail()){
    cerr << "File Open Error";
    return 0;
  }
    
  for(i=0; i < N; i++){
    rdnum = rand() % 100;
    ofs << rdnum;
    if(! ofs.fail()){
      cout << rdnum << " has written into the file. ";
    }
  }
  ofs.close();
}