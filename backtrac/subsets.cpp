#include<iostream>
#include <string>
using namespace std;

void printSubsets(string str, string subset){
    if(str.size() == 0){
        cout << subset << "\n";
        return;
    }
    char ch = str[0];
    printSubsets(str.substr(1, str.size()-1), subset+ch);
    printSubsets(str.substr(1, str.size()-1), subset);
}
int main(){
    string str = "abcd";
    string subset = " ";

    printSubsets(str, subset);
    return 0;
}