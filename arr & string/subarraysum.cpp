#include<iostream>
using namespace std;
void maxsubarrraysum(int arr[], int n){
    int maxsum = INT8_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int csum = 0;
            for(int i=start; i<=end; i++){
                csum = csum+arr[i];
            }
            cout << csum << "," << " ";
            maxsum = max(maxsum, csum);
        }
        cout << endl;
    }
    cout << "The max-subarray sum is: " << maxsum << endl;
}
int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    maxsubarrraysum(arr, n);
    return 0;
}