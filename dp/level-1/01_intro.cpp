// dp -> dynamic programming
// 1. tabluation -> bottom up dp
// 2. memorization -> top down dp
// time complixty optimised
// space complixty optimised

// Ex. Fibonacci series
// finding the nth number of fibonacci series
// 0 1 1 2 3 5 8 13 21 34 ...
// adding previous two to get new number

// f(5) -> f(4) f(3)
// f(4) -> f(3) f(2)
// f(3) -> f(2) f(1)
// f(2) -> f(1) f(0)

// here memoization comes in -> stores the values in some map or table or array

#include<iostream>
#include<vector>
using namespace std;
int fibo(int n, vector<int> &v){

    if(n == 1 || n == 2 || v[n]!= -1){
        return v[n];
    }

    return v[n] = (fibo(n-1, v) + fibo(n-2, v));
}

int main(){
    // at first -> 0 
    // at second -> 1
    int n = 5;
    vector<int> v(n+1, -1);
    v[1] = 0;
    v[2] = 1;
    int ans = fibo(n, v);
    cout<<ans<<endl;
    return 0;
}

// time complexity is o(n)
// space complexity is o(n+1)