#include <iostream>
#include <fstream>
using namespace std;
int main(){

  int N;
  string stuName;
  float score1, score2;

  ofstream ofs;
  ofs.open("stuRecord.txt");
  if(!ofs){
    cout << "Open Error\n";
  }

  cout << "Please enter the amount of students\n";
  cin >> N;
  ofs << N << endl;

  for(int i = 0; i < N; i++){
    cout << "Please enter the name of the student.\n";
    cin >> stuName;
    ofs << stuName << endl;
    cout << "Please enter score one for " << stuName << ".\n";
    cin >> score1;
    ofs << score1 << endl;
    cout << "Please enter score 2 for " << stuName << ".\n";
    cin >> score2;
    ofs << score2 << endl;
  }

  ofs.close();
  cout << "Thank you have a good day.\n";



  
}