#include<iostream>
using namespace std;
int main(){

  int score;
  int numStudents, numScores;
  int i = 0, j = 0, sum = 0;
  float average;
  string nameStudent;

  cout << "How many students and how many scores for each student?" << endl;
  cout << "Students: ";
  cin >> numStudents;
  cout << "Scores: ";
  cin >> numScores;

  while(numStudents < 0 || numScores < 0){
    cout << "# Students or # scores has to be large than zero." << endl;
    cout << "Students: ";
    cin >> numStudents;
    cout << "Scores: ";
    cin >> numScores;
  }

  for(i = 1; i < numStudents + 1; i++){
    cout << "Enter the name of student #" << i << ": ";
    cin >> nameStudent;
    for(j = 1; j < numScores + 1; j++){
      cout << "Enter score #" << j << ": ";
      cin >> score;
      sum += score;
    }
  average = sum / numScores;
  cout << "Student Name:" << nameStudent << " Sum of scores:" << sum << " Average:" << average << endl;
  average = 0;
  sum = 0;
  }
}