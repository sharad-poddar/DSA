/*
 * here the time complexity is o(1) while space complexity is o(2n); 
*/

#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

stack<pair<int, int>> s;

void push(int x){
    int minEle;
    if(s.size() == 0){
        minEle = x;
    }else{
        if(x == NULL){
            x = INT_MIN;
        }
        minEle = min(x, s.top().second);
    }
    s.push({x, minEle});    
}

void pop(){
    if(s.size() == 0){
        cout<<"stack is underflow"<<endl;
        return;
    }

    s.pop();
    return;
}

int top(){
    if(s.size() == 0){
        cout<<"stack is underflow"<<endl;
        return;
    }

    return s.top().first;
}

int minEle(){
    if(s.size() == 0){
        cout<<"stack is underflow"<<endl;
        return;
    }

    return s.top().second;
}

int main(){
    push(10);
    push(11);
    push(-3);
    push(14);
    minEle();
    top();
    pop();
    pop();
    minEle();
    top();
    return 0;
}