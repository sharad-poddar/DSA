// fibonacci series using dp using tabulation method
#include<iostream>
#include<vector>
using namespace std;
int fibo(int n){

    int prev1 = 0;
    int prev2 = 1;
    int curr;

    for(int i=3; i<n+1; i++){
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return prev2;
}

int main(){
    // at first -> 0 
    // at second -> 1
    int n = 5;
    int ans = fibo(n);
    cout<<ans<<endl;
    return 0;
}

// time complexity is o(n)
// space complexity is o(1)