#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main(){
    list<int>ll;

    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    list<int>::iterator itr;
    for(itr = ll.begin(); itr!= ll.end(); itr++){
        cout << (*itr) << "->";
    }
    cout << endl;
    return 0;
}