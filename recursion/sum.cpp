#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 1;
    }
    return n + sum(n-1);
}
int main(){
   int x = sum(5);
   cout << x;

    return 0;
}