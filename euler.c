#include <stdio.h>
int problem1(){
  int final = 0;
  int testNum = 0;
  if(((testNum % 3 == 0) && (testNum < 1000)) || ((testNum % 5) && (testNum < 1000))){
    final += testNum;
    testNum += 1;
  }
  return final;
}

int problem5(int a){
  int final = 0;
  for(int x = a; x > 0; x--){
    if(final % x != 0){
      final *= final;
    }
  }
  return final;
}
int main(){
  printf("problem 1 is %d\n", problem1());
  printf("problem 5 is %d\n", problem5(20));
}
