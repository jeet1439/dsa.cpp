#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int sum = 0;
    vector<int> A = {4, 1, 8, 7};
    vector<int> B = {2, 3, 6, 5};
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for(int i=0; i<A.size(); i++){
        int pairSum = abs(A[i] - B[i]);
        sum = sum + pairSum;
    }
    cout <<"min abs diff is :" << sum << endl;
    return 0;

}