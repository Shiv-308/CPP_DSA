#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int x=n*n-n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<++x;
        }
        cout<<endl;
        x=x-(2*n);
    }
    return 0;
}