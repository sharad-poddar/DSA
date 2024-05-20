// frog on the 1st step of stairs, wants to reach nth stair
// i is the height of i+1 th stair
// frong jums from ith to jth stair then enrgy loss = height(i-1) - height(j-1)
// frog can jump only i+1 or i+2 from ith stair
// min energy loss to reach nth stair

// as there is ways to reach nth stair -> try all possible ways
#include<iostream>
#include<vector>
using namespace std;
int min_energy(int n, vector<int> &v){
    if(n == 0){
        return v[0];
    }

    int jump_one = min_energy(n-1, v) + (min_energy(n, v) - min_energy(n-1, v));
    int jump_two = min_energy(n-2, v) + (min_energy(n, v) - min_energy(n-2, v));

    return v[n] = min_energy(n-1, v) + min_energy(n-2, v);
}

int main(){
    int n = 5;
    vector<int> v(n+1, -1);
    int ans = min_energy(n, v);
    cout<<ans<<endl;
    return 0;
}