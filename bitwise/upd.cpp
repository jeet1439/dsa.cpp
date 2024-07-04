#include<iostream>
using namespace std;

void updatebit(int num, int i, int val){
    num = num & ~(1 << i);

    num = num | (val << i);
    cout << num << endl;
}
void clearith(int num, int i){
    int bitmask = (~0) << i;
    num = num & bitmask;
    cout << num << endl;
}
int main(){
    updatebit(7,2,0);
    clearith(15, 2);
    return 0;
}