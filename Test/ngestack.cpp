#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> nge(vector<int> a){
    int n=a.size();
    vector<int> output(n,-1);
    stack<int> st;//indexes stored in this stack
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && a[i]>a[st.top()]){
            output[st.top()]=a[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}
int main(){
    vector<int> a={4,3,9,7,6,4,8,3};
    vector<int> res=nge(a);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}