#include<iostream>
using namespace std;
void pow(int num){
    if(!(num & (num-1))){
        cout << "yes power of two" << endl;
    }else{
        cout << "not" << endl;
    }
}
int main(){
    pow(2);
    pow(7);
    pow(9);
    return 0;
}