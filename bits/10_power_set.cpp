// power set using bit manupulation
// nums = {1, 2, 3}
// power set -> {}, {1}, {2}, {3}, {1, 2}, {2, 3}, {3, 1}, {1, 2, 3}
// no pf power set -> 2^n = 2^3 = 8
// taking that number which has set bit
// 2 1 0
// 0 0 0 -> {}
// 0 0 1 -> {0}
// 0 1 0 -> {1}
// 0 1 1 -> {0, 1}
// 1 0 0 -> {2}
// 1 0 1 -> {0, 2}
// 1 1 0 -> {1, 2}
// 1 1 1 -> {0, 1, 2}

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<vector<int>> powerSet(vector<int> &s){

    vector<vector<int>> ans;
    int num, count;
    int n = s.size();
    for(int i=0; i<pow(2,n); i++){
        vector<int> l;
        num = i;
        count = 0;
        while(num!=0){
            if((num&1) == 1){
                l.push_back(s[count]);
            }
            count++;
            num = num >> 1;
        }
        ans.push_back(l);
    }
    return ans;
}

int main(){
    vector<int> s = {1, 2, 3};
    vector<vector<int>> v = powerSet(s);
    
    for(vector<int> i: v){
        for(int j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// space complexity -> nearly o(2^n * n)
// time compliexty -> o(2^n * n)