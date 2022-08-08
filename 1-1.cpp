//
//  workshop1-1.cpp
//  week3workshop
//
//  Created by Jordan Le on 8/8/2022.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void printer(int array[10][10]){
  
  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
}

int main(void){
  
  int array[10][10] = {
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
  };
  
  printer(array);
}
