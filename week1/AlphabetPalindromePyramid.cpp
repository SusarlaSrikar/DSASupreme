#include <iostream>

using namespace std;

int main()
{
    for(int i =0;i<6;i++){
        char pal ='A';
        for( int j=0;j<=i;j++){
            cout<<(char)(pal+j)<<" ";
        }
        for( int k=i;k>0;k--){
            cout<<(char)(pal+k-1)<<" ";
        }
        cout<<endl;   
        }

    return 0;
}
