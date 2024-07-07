#include <iostream>
using namespace std;

class Node
{   public:
    int data;

    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
    ~Node(){
        cout << "node destructor for data: " << data << endl;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

class List
{
    Node* head;
    Node* tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    ~List(){
        cout << "~List\n";
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }
    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void position(int val, int pos){
        Node*newNode = new Node(val);
        Node*temp = head;

        for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void print_list()
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
       cout << "NULL" <<endl; 
    }
    int  searchItr(int key){
        int idx =0;
        Node*temp = head;
        while(temp!=NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
    int searchRec(int key){
        return helper(head, key);
    }
    int helper(Node*temp, int key){ //temp is head for each call
        if(temp == NULL){
            return -1;
        }
        if(temp->data == key){
            return 0;
        }
        int idx = helper(temp->next, key);
    
    if(idx == -1){
        return -1;
    }
    return idx+1;
    }
};

int main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.print_list();
    cout << "element at " << ll.searchRec(4) << " no index" << endl;
    

    return 0;
}
