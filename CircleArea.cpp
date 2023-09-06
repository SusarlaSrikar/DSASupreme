#include <iostream>
#include <math.h>
using namespace std;

void areaOfCircle();

int main() {
  areaOfCircle();
  
}

void areaOfCircle(){
  cout << "Enter Radius of the circle\n";
  int radius=0;
  cin>>radius;
  cout<<M_PI*radius*radius;
  return;
}
