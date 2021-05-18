#include <fstream>
#include <iostream>
using namespace std;
int main(){

  int N;
  string stuName;
  double score1, score2;
  double classTotal, classAverage = 0;

  ifstream ifs;
  ifs.open("stuRecord.txt");
  if(!ifs){
    cout << "Open Error\n";
    exit (0);
  }

  ifs >> N;
  for(int i = 0; i < N; i++){
    ifs >> stuName;
    cout << stuName << ": ";
    ifs >> score1;
    ifs >> score2;
    cout << score1 << ", " << score2 << endl;
    cout << "Student Total: " << score1 + score2 << endl;
    cout << "Student Average: " << ((score1 + score2) / 2 ) << endl;
    classTotal = classTotal + score1 + score2;
  }

  classAverage = classTotal / (2 * N);
  cout << "Class Total: " << classTotal << endl;
  cout << "Class Average: " << classAverage << endl;

}
