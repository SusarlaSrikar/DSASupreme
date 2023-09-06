#include <iostream>
using namespace std;
void ReverseArray(int arr[], int size);
int main() {
  int size;
  
  cout << "Enter size of an array\n";
  cin>>size;
  int arr[size];

  cout << "Enter elements of the array\n";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  

  ReverseArray(arr, size);

    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  
  return 0;
}


void ReverseArray(int arr[], int size){

  for(int i=0,j=size-1;j>i;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]= temp;
  }
  return;
}
