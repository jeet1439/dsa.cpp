#include<iostream>
using namespace std;
void maxsubarrraysum(int arr[], int n){
    int maxsum = INT8_MIN;
    for(int start=0; start<n; start++){
            int csum = 0;
        for(int end=start; end<n; end++){
            csum = csum + arr[end];
            maxsum = max(maxsum, csum);
        }
    }
    cout << "The max-subarray sum is: " << maxsum << endl;
}
void kadans(int arr[], int n){
    int maxsum = INT8_MIN;
    int csum =0;
    for(int i=0;i<n;i++){
        csum = csum+arr[i];
        maxsum = max(csum, maxsum);
        if(csum<0){
            csum = 0;
        }
    }
    cout << "The max-subarray sum is: " << maxsum << endl;
}
int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    kadans(arr, n);
    return 0;
}