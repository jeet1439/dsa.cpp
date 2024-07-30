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
void levelOrdre(Node *root){
    if(root == NULL){
        return ;
    }
    queue<Node*>Q;
    Q.push(root);
    while(!Q.empty()){
        Node *curr = Q.front();
        Q.pop();
        cout<< curr->data << " ";
        if(curr->left!= NULL){
            Q.push(curr->left);
            
        }
        if(curr->right!= NULL){
            Q.push(curr->right);
            
        }
    }
    cout << endl;
}
void topView(Node *root){
    queue<pair<Node*, int>>Q; //node, horizontaldiastan
    map<int, int> m;
    Q.push(make_pair(root, 0));
    while(!Q.empty()){
    pair<Node*, int > curr = Q.front();
    Q.pop();

    Node* currnode = curr.first;
    int currHD = curr.second;

    if(m.count(currHD) == 0){ //unique add in map
      m[currHD] = currnode->data;
    }
    if(currnode->left != NULL){
        pair<Node*, int>left = make_pair(currnode->left, currHD-1);
        Q.push(left);
    }
    if(currnode->right != NULL){
        pair<Node*, int>right = make_pair(currnode->right, currHD+1);
        Q.push(right);
    }
   }  
   for(auto it : m){
    cout << it.second << " ";
   }
   cout << endl;
}

int main(){
    vector<int>nodes = {1, 2 , 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    //cout << root->data;
    topView(root);
    return 0;
}