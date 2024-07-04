#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1(10, -1);
    for(int i=0; i<vec1.size(); i++){
        cout << vec1[i] << " ";
    }
    cout << endl;
    return 0;
}