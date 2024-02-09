/*
 * when a function call itself in it, then loop formed this loop is recurssion.
 * possible error of stack overflow
 * time complexity is o(1)
 * space complexity is o(1)
*/

#include<iostream>
using namespace std;
void Working(int i){
    if(i==5){
        return;
    }
    cout<<i<<" ."<<"MovingForward\n";
    Working(i+1);
    cout<<i<<" ."<<"MovingBackward\n";
}

int main(){
    int i=0;
    Working(i);
    return 0;
}
