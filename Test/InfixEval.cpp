#include <bits/stdc++.h>
using namespace std;
int precedence(char ch){
    if(ch=='^') return 3;
    else if(ch=='*' || ch=='/') return 2;
    else if(ch=='+' || ch=='-') return 1;
    else return -1;
}
int calc(int v1,int v2,char ch){
    if(ch=='+') return v1+v2;
    else if(ch=='-') return v1-v2;
    else if(ch=='*') return v1*v2;
    else if(ch=='/') return v1/v2;
    else return pow(v1,v2);
}
int inFix(string str){
    stack<int> num;
    stack<int> opr;
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){
            num.push(str[i]-'0');
        }
        else if(str[i]=='('){
                opr.push(str[i]);
            }
        else if(str[i]==')'){
                while(!opr.empty() && opr.top()!='('){
                int v2=num.top();
                num.pop();
                int v1=num.top();
                num.pop();
                char ch=opr.top();
                opr.pop();
                num.push(calc(v1,v2,ch));
                } 
                if(!opr.empty()){
                opr.pop();
                }
            }
            else{
                while(!opr.empty() && precedence(opr.top())>=precedence(str[i])){
                    int v2=num.top();
                    num.pop();
                    int v1=num.top();
                    num.pop();
                    char ch=opr.top();
                    opr.pop();
                    num.push(calc(v1,v2,ch));
                    
                    
                }   
                opr.push(str[i]);
                }
            }
            while(!opr.empty()){
                int v2=num.top();
                    num.pop();
                    int v1=num.top();
                    num.pop();
                    char ch=opr.top();
                    opr.pop();
                    num.push(calc(v1,v2,ch));
            }
            return num.top();
 }
    

int main(){
    string str="2*4+(6*1)-4";
    int result=inFix(str);
    cout<<result<<endl;
    return 0;
    return 0;
}