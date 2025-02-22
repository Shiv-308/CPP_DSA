#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    stack<int> st;
    
    void push(int x){
        st.push(x);
    }
    void pop(){
        stack<int> temp;
        while(st.size()!=1){
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }
    void display(){
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        while(!temp.empty()){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<endl;
    }
        
};

int main(){
    Queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();
    
    qu.display();
    return 0;
}