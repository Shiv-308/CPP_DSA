#include <iostream>
#include <stack>
using namespace std;
bool IsValid(string st){
    stack<char> temp;
    
    for(int i=0;i<st.length();i++){
    
        if(st[i]=='('||st[i]=='{'||st[i]=='['){
            temp.push(st[i]);
        }
        else if(st[i]==')'||st[i]=='}'||st[i]==']'){
            
        
            if(temp.empty()){
                return false;
            }
            
            else{
                if((st[i]==')'&&temp.top()=='(')||
                (st[i]==']'&&temp.top()=='[')||
                (st[i]=='}'&&temp.top()=='{')){
                    temp.pop();
                }
                else{
                    return false;
                }
            }
        }
    }
    return temp.empty();
}
int main(){
    string str="{{}[()}";
    bool res=IsValid(str);
    cout<<res<<endl;
    return 0;
}
