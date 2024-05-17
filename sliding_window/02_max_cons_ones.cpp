// max consecutive ones
// here we have allowed to flip atmost k numbers
// arr = [1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0] and k = 2;
// means an consective can contains k 0 simultanoesouly
#include<iostream>
#include<vector>
using namespace std;
int max_ones(vector<int> &v, int k){
    
    int j = 0, maxi = 0, count = 0, first = -1;
    for(int i=0; i<v.size(); i++){
        
        if(v[i] == 1 || count < k){
            if(v[i] == 0){
                if(first == -1){
                    first = i;
                }
                count++;
            }
            maxi = max(i-j+1, maxi);
            continue;
        }

        j = first + 1;
        while(v[j]!=0){
            j++;
        }
        first = j;
        maxi = max(i-j+1, maxi);
    }
    return maxi;
}

int main(){
    vector<int> v = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    int ans = max_ones(v, k);
    cout<<ans<<endl;
    return 0;
}

// time complexity is o(n)
// space complexity is o(n)