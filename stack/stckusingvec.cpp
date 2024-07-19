#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int>vec;
    public:
    int idx = 0;
    void push(int val){
        vec.push_back(val);  
    }
    void pop(){
        if(vec.size() == 0){
            cout << "stack is empty " << endl;
            return;
        }
        vec.pop_back();
    }
    int top(){
        if(vec.size() == 0){
            cout << "stack is empty " << endl;
            return;
        }
        idx = vec.size()-1;
        return vec[idx];
    }
    void printStack(){
        idx = vec.size()-1;
        for(int i=idx; idx>=0; idx--){
            cout << vec[idx] << " ";
        }
        cout << endl;
    }
};
int main(){
     Stack s;
     s.pop();
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     s.push(5);
     s.printStack();
     s.pop();
     s.printStack();
    return 0;
}