#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxActivity(vector<int>start, vector<int>end){
    int count = 1;
    int currEndTime = end[0];
    cout <<"selecting activity A0" <<endl;
    for(int i =1; i<start.size(); i++){
        if(start[i] >= currEndTime){
        cout <<"selecting activity A" << i <<endl; 
            count++;
            currEndTime = end[i];
        }
    }
    return count;
}
bool compare(pair<int, int>p1,pair<int, int>p2){
    return p1.second < p2.second;
}
int main(){
    vector<int>start = {0, 1, 2};
    vector<int>end = {9, 2, 4};
    vector<pair<int, int>> activity(3, make_pair(0,0));
    activity[0] = make_pair(0,9);
    activity[1] = make_pair(1,2);
    activity[2] = make_pair(2,4);
   
   for(int i=0; i<activity.size(); i++){
    cout << activity[i].first <<","<<activity[i].second<<endl;
   }
   sort(activity.begin(), activity.end(), compare);
   for(int i=0; i<activity.size(); i++){
    cout << activity[i].first <<","<<activity[i].second<<endl;
   }
    return 0;
}
