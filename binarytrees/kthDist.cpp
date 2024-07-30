#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
class Node{
  public:
  int data;
  Node *left;
  Node *right;

  Node(int data){
    this->data = data;
    left = right = NULL;
  }
};
static int idx = -1;
Node *buildTree(vector<int> nodes){
   idx++;
   if(nodes[idx] == -1){
    return NULL;
   }
   Node* currNode = new Node(nodes[idx]);
   currNode->left = buildTree(nodes);
   currNode->right = buildTree(nodes);
   return currNode;
}
void kthHelper(Node *root, int k, int currlevel){
   if(root == NULL){
    return ;
   }
   if(currlevel == k){
    cout << root->data <<" ";
    return;
   }
   kthHelper(root->left, k, currlevel+1);
   kthHelper(root->right, k, currlevel+1);
}
void kthlvl(Node *root, int k){
     kthHelper(root, k , 1);
     cout << endl;
}

int main(){
    vector<int>nodes = {1, 2 , 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    //cout << root->data;
    kthlvl(root , 3);
    return 0;
}