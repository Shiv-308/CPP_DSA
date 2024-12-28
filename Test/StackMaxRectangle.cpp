#include<bits/stdc++.h>
using namespace std;
vector<int> nse(vector<int> &a){
    stack<int> st;
    vector<int> res(a.size(),-1);
    st.push(0);
    for(int i=1;i<a.size();i++){
        while(!st.empty() && a[i]<a[st.top()]){
            res[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    return res;
}
vector<int> pse(vector<int> &a){
    stack<int> st;
    vector<int> res(a.size(),-1);
    reverse(a.begin(),a.end());
    st.push(0);
    for(int i=1;i<a.size();i++){
        while(!st.empty() && a[i]<a[st.top()]){
            res[st.top()]=a.size()-i-1;
            st.pop();
        }
        st.push(i);
    }
    reverse(a.begin(),a.end());
    reverse(res.begin(),res.end());
    return res;
}
int maxrectangle(vector<int> &a){
    vector<int> res1=nse(a);
    vector<int> res2=pse(a);
    int maxrec=0;
    for(int i=0;i<a.size();i++){
        maxrec=max(maxrec,a[i]*(res1[i]-res2[i]-1));
    }
    return maxrec;

}


int main(){
    vector<int> a={2,1,5,6,2,3};
    vector<int> res1=nse(a);
    for(int i=0;i<res1.size();i++){
        cout<<res1[i]<<" ";
    }
    cout<<endl;
    vector<int> res2=pse(a);
    for(int i=0;i<res2.size();i++){
        cout<<res2[i]<<" ";
    }
    cout<<endl;
    int result=maxrectangle(a);
    cout<<"Result = "<<result<<endl;
    return 0;
}