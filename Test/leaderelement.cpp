#include <bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> &v){
    vector<int> res;
    int n=v.size();
    int currmax=v[n-1];
    res.push_back(currmax);
    for(int i=n-2;i>=0;i--){
        if(v[i]>currmax){
            currmax=v[i];
            res.push_back(currmax);
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    vector<int> v={23,16,17,7,5,3,4,2};
    vector<int> res=fun(v);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
