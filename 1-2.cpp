//
//  1-2.cpp
//  week3workshop
//
//  Created by Jordan Le on 8/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

void print_class(string courses[4], string students[], int report_card[][4], int nstudents){
  
  cout << "Report Card ";
  for (int i=0; i<4; i++){
    cout << courses[i] << " ";
  }
  cout << endl;
  
  for (int i=0; i<nstudents; i++){
    for (int j=0; j<5; j++){
      if (j==0){
        cout << students[i] << " ";
      } else {
        cout << report_card[i][j-1] << " ";
      }
    }
    cout << endl;
  }
}

int main(void) {
  
  int nstudents = 3;
  string courses[4] = {"Maths", "History", "English", "Science"};
  string students[3] = {"Jordan", "Minh", "Greenland"};
  
  int report_card[3][4] = {
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4}
  };
  
  print_class(courses, students, report_card, nstudents);
}
