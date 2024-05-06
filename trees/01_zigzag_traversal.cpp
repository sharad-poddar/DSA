/*
 * traversal of binary tree in the zig-zag manner 
 * here as NULL leads to idea of when null using stack to store 
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



/*
 * here size is used instead of the null as size of always an single level 
 * of the binary tree, here we are mkaing a slot of vectors for each level
*/
#include<iostream>
#include<queue>
#include<vector>
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

vector<vector<int>> zigzagTraversal(node* root){
    
    vector<vector<int>> v;
    if(root == NULL){
        return v;
    }
    
    bool flag = false;
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> currentLevel(size);
        
        for(int i=0;i<size;i++){
            node* temp = q.front();
            q.pop();
            if(flag){
                currentLevel[size-i-1] = temp->data;
            }else{
                currentLevel[i] = temp->data;
            }
            
            if(temp->left!=NULL){
                q.push(temp->left);
            }
        
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
        
        v.push_back(currentLevel);
        flag = !flag;
    }
    return v;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    vector<vector<int>> v = zigzagTraversal(root);
    
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}