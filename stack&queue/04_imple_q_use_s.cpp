/*
 * implementation of queue using stack
*/
#include<iostream>
#include<stack>
using namespace std;
stack<int> input;
stack<int> output;
void push(int x){
    input.push(x);
}
void pop(){
    if(output.empty()){
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
    }
    output.pop();
} 
int top(){
    if(output.empty()){
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
    }
    return output.top();
}
int main(){
    push(10);
    push(20);
    push(30);
    cout<<top()<<endl;
    push(40);
    pop();
    cout<<top()<<endl;
    return 0;
}