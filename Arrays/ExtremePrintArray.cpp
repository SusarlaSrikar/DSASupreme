#include <iostream>
using namespace std;
void ExtremePrintArray(int arr[], int size);
int main() {
  int size;
  
  cout << "Enter size of an array\n";
  cin>>size;
  int arr[size];

  cout << "Enter elements of the array\n";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  

  ExtremePrintArray(arr, size);
  return 0;
}


void ExtremePrintArray(int arr[], int size){

  for(int i=0,j=size-1;j>i;i++,j--){
    
    cout<<arr[i]<<" ";
    cout<<arr[j]<<" ";
  }
  return;
}
