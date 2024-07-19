#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmallerLeft(vector<int> height) {
    vector<int> nsl(height.size(), -1);
    vector<int>nsr(height.size(), height.size());
    stack<int> s;
    s.push(0);
    for (int i = 1; i < height.size(); i++) {
        int curr = height[i];
        while (!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if (!s.empty()) {
            nsl[i] = s.top();
        }
        s.push(i); 
    }
    
    while(!s.empty()){
         s.pop();
    }
    int n = height.size();
    s.push(n-1);
    for(int i=n-2; i>=0; i--){
        int curr  = height[i];
        while (!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if (!s.empty()) {
            nsr[i] = s.top();
        }
        s.push(i);
    }
    int maxArea = 0;
    for(int i=0; i<height.size(); i++){
        int h = height[i];
        int wid = nsr[i] - nsl[i] -1;
        int area = h*wid;
        maxArea = max(area, maxArea);
    }

    cout << maxArea <<endl;
    return nsr;
}

int main() {
    vector<int> height = {2, 1, 5, 6, 2, 3};
    vector<int> nsr = nextSmallerLeft(height);

    
    return 0;
}
