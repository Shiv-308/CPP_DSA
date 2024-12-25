#include <iostream>
#include <vector>
using namespace std;
vector<int> res(0,-1);
void nge(vector<int> a,int curr,int i){
    if(a[i]>a[curr]){
        res.push_back(a[i]);
    return;
    }
    else if(i==a.size()-1){
        res.push_back(-1);
    return;
    }
    nge(a,curr,i+1);
    return;
    
}
int main(){
    vector<int> a={4,3,9,1,6,8,2};
    for(int curr=0;curr<a.size()-1;curr++){
        nge(a,curr,curr+1);
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}