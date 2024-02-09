
/**
 * Write a program and recurrence relation to find the Fibonacci series of n where n>2 . 
 * Mathematical Equation
 * starting from 0 to 0
 * time complexity is 0(2^n)
 * space complexity is 0(n)
*/

#include<iostream>
using namespace std;
int Fibo(int n){

    if(n==0 || n==1){
        return n;
    }

    int ans = Fibo(n-1)+Fibo(n-2);
    return ans;
}

int main(){

    int n;
    cout<<"n: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<Fibo(i)<<" ";
    }

    cout<<endl;
    return 0;
}