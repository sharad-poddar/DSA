/*
 * whenever we move left then increase level by 1 and decrease the branch by -1
 * whenever we move right then increase level by 1 and increase the branch by 1 
*/

#include<iostream>
#include<map>
#include<set>
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

void verticalTraversal(node* root){
    map<int, map<int, multiset<int>>> m;
    queue<pair<node*, pair<int, int>>> q;
    // here node, level, vertical
    q.push({root, {0, 0}});

    while(!q.empty()){
        auto temp = q.front();
        q.pop();

        node* eleNode = temp.first;
        int x = temp.second.first;
        int y = temp.second.second;
        m[x][y].insert(eleNode->data);
        if(eleNode->left!=NULL){
            q.push({eleNode, {x+1, y-1}});
        }
        if(eleNode->right!=NULL){
            q.push({eleNode, {x+1, y+1}});
        }
    }

    vector<vector<int>> v;
    for(auto i:m){
        vector<int> ans;
        for(auto q: i.second){
            ans.insert(ans.end(), q.second.begin(), q.second.end());
        }
        v.push_back(ans);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}


int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    
    verticalTraversal(root);
    return 0;

}