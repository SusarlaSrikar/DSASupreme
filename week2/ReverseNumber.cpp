#include<iostream>
using namespace std;

/* Is Prime number or not */

int main(){
  int num,rnum;
  cout<<"Enter a number to reverse"<<endl;
  cin>>num;
  while(num>0){
    
    rnum = (rnum * 10)+(num%10);
    num = num/10;
  }
  cout<<rnum<<endl;
    
  return 0;
  
}
