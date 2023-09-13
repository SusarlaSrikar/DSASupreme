#include <iostream>
using namespace std;

/* Is Prime number or not */
void divideNumbers(int a[], int size);

int main() {
  int num;
  cout << "Enter array size " << endl;
  cin >> num;
  int a[num];
  for (int i = 0; i < num; i++) {
    cin >> a[i];
  }

  divideNumbers(a, num);

  for (int i = 0; i < num; i++) {
    cout << a[i] << " ";
  }

  return 0;
}

void divideNumbers(int a[], int size) {
  int i = 0;
  int j = size - 1;

  while (i < j) {
    while (a[i] < 0 && i <j) {
      i++;
    }
    while (a[j] > 0 && j >= i) {
      j--;
    }
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
  }
  return;
}
