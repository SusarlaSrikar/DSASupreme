#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<6;i++){
        for(int k =i;k>0;k--){
            cout<<" ";
        }
        for(int j=6; j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
        
    }

    return 0;
}
