#include <bits/stdc++.h>
using namespace std;
vector<int> pge(vector<int> &a){
    stack<int> st;
    vector<int> res(a.size(),-1);
    reverse(a.begin(),a.end());
    st.push(0);
    for(int i=1;i<a.size();i++){
        while(!st.empty() && a[i]>a[st.top()]){
            res[st.top()]=a.size()-i-1;//after reversing the output array indexes would change.
            st.pop();
        }
        st.push(i);
    }
    reverse(res.begin(),res.end());
    reverse(a.begin(),a.end());
    return res;
    
}
int main(){
    vector<int> a={100,80,60,70,60,75,85};
    vector<int> res=pge(a);
    for(int i=0;i<a.size();i++){
        cout<<i-res[i]<<" ";//counting the difference between current index and prev greater elem index
    }
    cout<<endl;
    return 0;
}