/*
 * stack is based on LIFO -> last in first out
 * this is stack implementation using queue
*/

#include<iostream>
#include<queue>
using namespace std;

queue<int> q1;
queue<int> q2;

// here loop is formed as q2 -> q1 -> q2 ..
// swapping is done b/w q2 and q1
void push(int x){
    q2.push(x);
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1, q2);
}

void pop(){
    q1.pop();
}

int top(){
    return q1.front();
}

int main(){
    push(10);
    push(20);
    push(30);
    cout<<top()<<endl;
    pop();
    cout<<top()<<endl;
    return 0;
}