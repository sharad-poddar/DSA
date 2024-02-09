/**
 * Given an array with all distinct elements, find the largest three elements. 
 * Expected time complexity is O(n) and extra space is O(1). 
*/

#include<iostream>
using namespace std;
int main(){

    int arr[] = {10, 4, 3, 50, 23, 90};
    // output = {90, 50, 23};
    int size = sizeof(arr)/sizeof(int);

    int first, second, third;
    first = second = third = -1;

    for(int i=0;i<size;i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }else if(arr[i]>second){
            third = second;
            second = arr[i];
        }else{
            third = arr[i];
        }
    }

    cout<<" first: "<<first<<" second: "<<second<<" third: "<<third<<endl;
    return 0;
}

// time complexity -> o(n)
// space complexity -> o(1)
// another way -> simply sorting and returning last 3 as takes o(nlog(n))
