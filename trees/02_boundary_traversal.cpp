/*
 * boundary traversal -> 
 * moving anticlockwise in which left then leaf then right
 * traversal of right is in reverse order
 * we are traversing each one border differently and taking care of node that is
 * not leaf node
*/

#include<iostream>
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

bool isLeaf(node* root){
    if(root == NULL ){
        return false;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    return false;
}

// consider only the leaves node
void addLeftNode(node* root, vector<int> &ans){
    
    node* curr = root->left;
    while(curr!=NULL){
        if(!isLeaf(curr)){
            ans.push_back(curr->data);
        }
        if(curr->left){
            curr = curr->left;
        }else{
            curr = curr->right;
        }
    }
    
}

void addLeafNode(node* root, vector<int> &ans){
    
    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
    }
    
    if(root->left!=NULL){
        addLeafNode(root->left, ans);
        
    }
    if(root->right!=NULL){
        addLeafNode(root->right, ans);
    }
}

void addRightNode(node* root, vector<int> &ans){
    
    vector<int> v;
    
    node* curr = root->right;
    while(curr!=NULL){
        if(!isLeaf(curr)){
            v.push_back(curr->data);
        }
        if(curr->right){
            curr = curr->right;
        }else{
            curr = curr->left;
        }
    }
    
    int size = v.size();
    for(int i=size-1; i>=0;i--){
        ans.push_back(v[i]);
    }
}


int main(){
    vector<int> ans;
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    
    if(root == NULL){
        return 0;
    }
    
    ans.push_back(root->data);
    addLeftNode(root, ans);
    addLeafNode(root, ans);
    addRightNode(root, ans);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}




/*
 * 
 * 
*/