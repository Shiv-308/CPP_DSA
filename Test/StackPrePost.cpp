#include <bits/stdc++.h>
using namespace std;
int calc(int v1,int v2,char op){
    if(op=='+'){
        return v1+v2;
    }
    if(op=='-'){
        return v1-v2;
    }
    if(op=='*'){
        return v1*v2;
    }
    if(op=='+'){
        return v1/v2;
    }
}
int posteval(string str){
    stack<int> st;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(isdigit(ch)){
            st.push(ch - '0');
        }else{            
            int v2=st.top();
            st.pop();
            int v1=st.top();
            st.pop();
            int res=calc(v1,v2,ch);
            st.push(res);
        }
    }
    return st.top();
}
int preeval(string str){
    stack<int> st;
    for(int i=str.size()-1;i>=0;i--){
        char ch=str[i];
        if(isdigit(ch)){
            st.push(ch - '0');
        }else{            
            int v2=st.top();
            st.pop();
            int v1=st.top();
            st.pop();
            int res=calc(v1,v2,ch);
            st.push(res);
        }
    }
    return st.top();
}
int main(){
    string str="+-241";
    int result=preeval(str);
    cout<<result<<endl;
    return 0;
}
