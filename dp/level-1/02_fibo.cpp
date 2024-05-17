// fibonacci series using dp using tabulation method
#include<iostream>
#include<vector>
using namespace std;
int fibo(int n, vector<int> &v){

    // here bottom to up approach is using
    // as for i=0 and i=1 is already booked
    for(int i=3; i<n+1; i++){
        v[i] = v[i-1] + v[i-2];
    }
    return v[n];
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