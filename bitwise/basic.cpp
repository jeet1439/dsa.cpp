#include<iostream>
using namespace std;
void num(int num){
    if(!(num & 1)){
        cout<< "even";
    }else{
        cout << "odd";
    }
}
int main(){
    num(3);
    return 0;
}