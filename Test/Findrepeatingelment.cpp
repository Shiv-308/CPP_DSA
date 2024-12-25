#include <iostream>
#include <vector>
using namespace std;
vector<int> fun(vector<int> a){
    vector<int> res;
    //sort(a.begin(),a.end());
    
    for(int i=0;i<a.size()-1;i++){
        int curr;
        if(a[i]==a[i+1] && a[i]!=curr){
            res.push_back(a[i]);
            curr=a[i];
        }
    }
    return res;
}
int main(){
    vector<int> a={1,1,1,2,3,4,4,5,5,6};
    vector<int> res;
    res=fun(a);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}