#include<iostream>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return n * fact(n-1);
}
int main(){
   int x = fact(5);
   cout << x;

    return 0;
}