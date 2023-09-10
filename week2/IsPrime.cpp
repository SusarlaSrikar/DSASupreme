#include<iostream>
using namespace std;

/* Is Prime number or not */

int main(){
  int n;
  bool flag =false;
  cin>>n;
  if(n<2){
    cout<<"Enter number greater than 1"<<endl;
  }
  if(n ==2){
    cout<<"Prime"<<endl;
    return 0;
  }
  if( n%2==0){
    cout<<"Not prime"<<endl;
    return 0;
  }
  for(int i=3;i<n/2;i+=2){
    if(n%i==0){
      if(flag){
        cout<<"Not a prime"<<endl;
        return 0;
      }
      else
        flag =true;
    }
  }
  cout<<"prime"<<endl;
  return 0;
  
}
