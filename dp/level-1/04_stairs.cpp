// no of ways climbing up stairs
// here stairs can be 1, 2, ....
#include<iostream>
#include<vector>
using namespace std;
int climb(int n, vector<int> &v){

    if(n == 1 || n == 2 || v[n] != -1){
        return v[n];
    }

    return v[n] = climb(n-1, v) + climb(n-2, v);
}

int main(){
    int n = 3;
    vector<int> v(n+1, -1);
    v[1] = 1;
    v[2] = 2;
    int ans = climb(n, v);
    cout<<ans<<endl;
    return 0;
}

// time complexity o(n);
// space complexity o(n);

// whenever try distinct, best way, diff ways, all possible way -> recurssion
// in this questions deal with index's
// if count all ways -> summ of all ways
// if min of all stuffs -> final min
