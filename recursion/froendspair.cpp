#include<iostream>
using namespace std;

friendspairing(int n){
    if(n==1 || n==2){
        return n;
    }  
    return friendspairing(n-1) + friendspairing(n-2)*(n-1);
}
int main(){
    cout << "total paired: " << friendspairing(4);
    return 0;
}