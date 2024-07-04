#include<iostream>
using namespace std;
int getbit(int num ,int i){
    int bitmask = 1 << i;
    if(!(bitmask & num)){
        return 0;
    }
    return 1;
}
int setBit(int num, int i){
    int bitmask = 1 << i;
    return (num | bitmask);
}
int clearBit(int num, int i){
    int bitmask = ~(1 << i);
    return (num & bitmask);
}
int main(){
      cout << getbit(7,1) << endl;
      cout << setBit(6,3) << endl;
      cout << clearBit(6,1) << endl;     
    return 0;
}