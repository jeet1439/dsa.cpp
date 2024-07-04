#include<iostream>
using namespace std;

int countStr(string s, int i, int j, int n){
    if(n == 1){
        return 1;
    }
    if(n <= 0){
        return 0;
    }
    int res = countStr(s, i+1, j, n-1) + countStr(s, i,  j-1, n-1) - countStr(s, i+1, j-1, n-2);

    if(s[i] == s[j]){
        res++;
    }
    return res;
}
int main(){
    string str = "abcab";
    int n = str.size();
    cout << countStr(str, 0, n-1, n) << endl;
    return 0;
}