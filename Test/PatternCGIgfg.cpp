#include <iostream>
using namespace std;
int main(){
    int x=1;
    int y=1;
    int n=3;
    int z=n*n;
    int a=2*(n-1);
    for(int i=n;i>=1;i--){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<x++;
        }
        for(int l=1;l<=i;l++){
            cout<<++z;
        }
        z=z-a-1;
        a=a-2;
        cout<<endl;
    }
}