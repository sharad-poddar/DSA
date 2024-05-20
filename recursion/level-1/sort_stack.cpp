// sorting an stack using recursion

#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int> &s, int top){
    if(s.empty() || s.top() < top){
        s.push(top);
        return;
    }

    int val = s.top();
    s.pop();
    insert(s, top);
    s.push(val);
}

void sort_stack(stack<int> &s){
    if(s.size() <= 1){
        return;
    }

    int top = s.top();
    s.pop();
    sort_stack(s);
    insert(s, top);
}

void display(stack<int> &s){
    cout<<"displaying ==== "<<endl;
    int n = s.size();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }  
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(15);
    s.push(22);
    s.push(24);

    display(s); 
    s.push(10);
    s.push(20);
    s.push(15);
    s.push(22);
    s.push(24);
    
    sort_stack(s);
    display(s);
    return 0;
}