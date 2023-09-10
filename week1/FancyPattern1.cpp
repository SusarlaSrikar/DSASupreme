#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<6;i++){
        for(int j=i;j>0;j--){
            cout<<i;
            if(j!=1){
                cout<<"*";
            }
            
        }
        cout<<endl;

    }
        for(int i=5;i>0;i--){
            for(int j=i;j>=1;j--){
            cout<<i;
            if(j!=1){
                cout<<"*";
            }
        }
        cout<<endl;

    }


    return 0;
}
