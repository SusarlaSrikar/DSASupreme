#include <iostream>
using namespace std;

void calculateFactorial();

int main() {
  calculateFactorial();

  return 0;
}

void calculateFactorial() {
  cout << "Enter the number to calculate its factorial \n";

  int number = 0;
  cin >> number;
  int factorial = 1;
  for (int i = number; i > 1; i--) {
    factorial *= i;
  }
  cout << "Factorial of " << number << " is " << factorial;
}
