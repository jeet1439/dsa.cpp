#include<iostream>
using namespace std;
int main(){
    char str[5]= {'a', 'b', 'c', 'd', '\0'};

    // char word[20];
    // cin >>word;
    // cout <<" ->" << word;

    char sentance[30];
    cin.getline(sentance, 30, '*');
    cout << "->" << sentance; 
    return 0;
}