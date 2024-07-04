#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int si, int ei, int mid){
    vector<int>ans;
    int i=si;
    int j=mid+1;
    int p;
    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            ans.push_back(arr[i++]);
        }else{
            ans.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        ans.push_back(arr[i++]);
    }
    while(j<=ei){
        ans.push_back(arr[j++]);
    }
    for(p=si;p<=ei; p++){
        arr[p] = ans[p - si];
    }
}
void mergesort(int arr[], int si, int  ei){
    if(si>=ei) {
        return;
    }
    int mid = (si+ei)/2;
    mergesort(arr, si, mid);
    mergesort(arr, mid+1, ei);
    merge(arr, si, ei, mid);
}
int main(){
    int arr[5] = {2, 1, 6, 7, 3};
    mergesort(arr, 0, 4);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
}