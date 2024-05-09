/*
 * every number in the array appearing twice
 * we have to find the number which appears once
*/
#include<iostream>
using namespace std;
int twice(int arr[], int n){

    int ans = arr[0];
    for(int i=1;i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int arr[] = {1,1,4,3,2,2,4,3,7,9,9,8,0,0,8};
    int n = sizeof(arr)/sizeof(int);
    int ans = twice(arr, n);
    cout<<ans<<endl;
    return 0;
}

