#include<iostream>
using namespace std;
int tile(int n){
    if(n==0 || n==1){
        return 1;
    }

    int ans1 = tile(n-1);
    int ans2 = tile(n-2);
    return ans1+ans2;
}
int main(){
    int p = tile(4);
    cout << p ;
    return 0;
}