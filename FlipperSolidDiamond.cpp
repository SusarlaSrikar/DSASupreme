#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            cout<<"*";
        }
        
        for(int k=i;k>=0;k--){
            cout<<" ";
        }
        for(int k=i;k>=0;k--){
            cout<<" ";
        }
        for(int j=i;j<6;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<6;i++){
        for(int j=i;j>=0;j--){
            cout<<"*";
        }
        for(int k=6;k>i;k--){
            cout<<" ";
        }
        for(int k=6;k>i;k--){
            cout<<" ";
        }
        for(int j=i;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
