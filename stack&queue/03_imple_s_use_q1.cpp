/*
 * stack is based on LIFO -> last in first out
 * this is stack implementation using single queue
*/

#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

// here loop is formed as q2 -> q1 -> q2 ..
// swapping is done b/w q2 and q1
void push(int x){
   q.push(x);
   int size = q.size()-1;
   while(size != 0){
        int ele = q.front();
        q.pop();
        q.push(ele);
        size--;
   }
}

void pop(){
    q.pop();
}

int top(){
    return q.front();
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