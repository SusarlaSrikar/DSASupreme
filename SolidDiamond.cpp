#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            cout<<" ";
        }
        for(int k=i;k>=0;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<6;i++){
        for(int j=i;j>0;j--){
            cout<<" ";
        }
        for(int k=6;k>i;k--){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
