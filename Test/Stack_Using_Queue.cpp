#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    queue<int> qu;
    void push(int x){
        qu.push(x);
    }
    void pop(){
        queue<int> temp;
        while(qu.size()!=1){
            temp.push(qu.front());
            qu.pop();
        }
        qu.pop();
        while(!temp.empty()){
            qu.push(temp.front());
            temp.pop();
        }
    }
    void display(){
        queue<int> temp;
         
        queue<int> q2; 
        while(!qu.empty()){
            temp.push(qu.front());
            while(!q2.empty()){
                temp.push(q2.front());
                q2.pop();
            }
            swap(temp,q2);
            qu.pop();
        }
        while(!q2.empty()){
            cout<<q2.front()<<" ";
            q2.pop();
        }
    cout<<endl;
    }
    
    
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    st.display();
    return 0;
}