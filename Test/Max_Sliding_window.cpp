#include <bits/stdc++.h>
using namespace std;
vector<int> max_window(int arr[],int k){
    int maximum=INT_MIN;
    vector<int> res;
    for(int i=0;i<k;i++){
        maximum=max(maximum,arr[i]);
    }
    res.push_back(maximum);
    for(int i=k;i<8;i++){
        if(maximum==arr[i-k]){
            
            for(int j=i-k+1;j<=i;j++){
                maximum=max(arr[j],maximum);
            }
            res.push_back(maximum);
        }
        else if(arr[i]<maximum){
            res.push_back(maximum);
            continue;
        }
        else if(arr[i]>maximum){
            maximum=arr[i];
            res.push_back(maximum);
        }
        else{
            continue;

        }
    }
    return res;
}
int main(){
    int arr[]={1,3,-1,-3,5,3,6,7};
    vector<int> res=max_window(arr,3);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

}