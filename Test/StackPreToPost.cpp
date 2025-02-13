#include <bits/stdc++.h>
using namespace std;
string prepost(string str){
    stack<string> st;
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){
            st.push(to_string(str[i]-'0'));
        }
        else{
            string v1=st.top();st.pop();
            string v2=st.top();st.pop();
            string ans=v1+v2+str[i];
            st.push(ans);
        }
    }
    return st.top();
}
int main(){
    string str="+-214";
    string res=prepost(str);
    cout<<res<<endl;
    return 0;;
}