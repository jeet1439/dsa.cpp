#include<iostream>
using namespace std;

void trap(int *heights, int n){
    int waterTrapped = 0;
    int leftMax[20000];
    int rightMax[20000];
    leftMax[0] = heights[0];
    rightMax[n-1] = heights[n-1]; 
    for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
    }
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
    }
    
    for(int i=0; i<n; i++){
        int currwater = min(leftMax[i], rightMax[i])- heights[i];
        if(currwater > 0){
            waterTrapped = waterTrapped + currwater;
        }
    }
    cout << waterTrapped << endl; 
}
int main(){
    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights)/sizeof(int);
    trap(heights, n);
    return 0; 
}