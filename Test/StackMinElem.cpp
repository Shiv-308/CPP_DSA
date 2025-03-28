#include <bits/stdc++.h>
using namespace std;
class MinStack{
    public:
    stack<int> st;
    int min=INT16_MAX;
    void push(int x){
        if(st.empty()){
            st.push(x);
            min=x;
        }
        else{
            if(x>=min){
                st.push(x-min);

            }
            else{
                st.push(x-min);
                min=x;
            }
        }
    }
    void pop(){
         if(st.top()>=0){
            st.pop();
         }
         else{
            min=min-st.top();
            st.pop();
         }
    }
    int minim(){
        if(!st.empty()){
            return min;
        }
        cout<<"Underflow";

    }

};
int main(){
    MinStack stk;
    stk.push(10);
    stk.push(-5);
    stk.push(4);
    stk.push(-1);
    stk.push(3);
    //stk.pop();
    //stk.pop();
    int res=stk.minim();
    cout<<res<<endl;
}