// single number part 3
// nums = {2, 4, 2, 6, 3, 7, 7, 3};
// output = {4, 6}
// simply can be solved using hashmaps
#include<iostream>
#include<vector>
using namespace std;
pair<int, int> singleNum(vector<int> &v){
    
    // concept of bucket is used here
    // there must be one bit diff so we get the ans
    // here ans != 0
    
    int ans = 0;
    for(int i=0; i<v.size(); i++){
        ans = ans ^ v[i];
    }

    // 1 0 1 0 -> ans
    // 1 0 0 1 -> ans - 1
    // 1 0 0 0 -> (ans) & (ans - 1)
    // 0 0 1 0 -> getting the right most bit
    int rightMost = (ans & (ans - 1)) ^ ans;

    // making an bucket
    int b1 = 0, b2 = 0;
    for(int i=0; i<v.size(); i++){
        if((v[i] & rightMost)){
            b1 = b1^v[i];
        }else{
            b2 = b2^v[i];
        }
    }

    return {b1, b2};
}

int main(){
    vector<int> v = {2, 4, 2, 6, 3, 7, 7, 3};
    pair<int, int> ans = singleNum(v);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}

// time complexity is o(n)
// space complexity is o(1)