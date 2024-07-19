#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool duplicateParenthesis(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(ch != ')'){
          st.push(ch);  
        }else{
            if(st.top() == '('){
                return true;
            }
            while(st.top() != '('){
                  st.pop();
            }
            st.pop();
        }
    }
    return false;
}
int main(){
    string str1 = "((a+b))";
    string str2 = "((a+b)+(c+d))";
    cout << duplicateParenthesis(str1) <<endl;
    cout << duplicateParenthesis(str2) <<endl;
    return  0;
}