#include <iostream>
#include <string>
#include "CharStack.cpp"
using namespace std;

int point(char x){
    if(x=='('||x==')')
        return 3;
    else if(x=='*'||x=='/')
        return 2;
    else if(x=='+'||x=='-')
        return 1;
    else return 0;
}

int main()
{
    CharStack st; // Character Stack
    string input;
    cin>>input;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]>='a'&&input[i]<='z')
            cout<<input[i];
        else{
            if(st.isEmpty()){
                st.push(input[i]);
            }else{
                if(input[i]=='('){
                    st.push(input[i]);
                }else if(input[i]==')'){
                    while(!st.isEmpty()&&st.top()!='('){
                        cout<<st.top();
                        st.pop();
                    }
                    if(!st.isEmpty())
                        st.pop();
                }else{
                    while(!st.isEmpty()&&st.top()!='('&&point(input[i])<=point(st.top())){
                        cout<<st.top();
                        st.pop();
                    }
                    st.push(input[i]);

                }
            }
        }
    }
    while(!st.isEmpty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}
