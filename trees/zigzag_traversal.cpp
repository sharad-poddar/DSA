/*
 * traversal of binary tree in the zig-zag manner 
 * here as NULL leads to idea of when null using stack to store data 
*/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

void zigzagTraversal(node* root){
    
    if(root == NULL){
        return;
    }
    
    bool flag = false;
    queue<node*> q;
    stack<int> s;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            q.push(NULL);
            flag = !flag;
            while(!s.empty()){
                cout<<s.top()<<" ";
                s.pop();
            }
            cout<<endl;
            continue;
        }
        
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        
        if(flag == true){
            s.push(temp->data);
            continue;
        }
        cout<<temp->data<<" ";
    }
    return;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    zigzagTraversal(root);
    return 0;
}