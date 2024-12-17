#include <iostream>
using namespace std;
int majority(int *arr,int n){
    for(int i=0;i<n/2;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
            
        }
        if(count>=n/2)
              return arr[i];
        
    }
    return -1;
}
int main(){
    int arr[]={3,3,2,4,6,3}; 
    int n=1;
    int res=majority(arr,n);
    cout<<res<<endl;
    
    
    return 0;
}