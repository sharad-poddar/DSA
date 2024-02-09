/*
 * Given an array of integers, our task is to write a program that efficiently 
 * finds the second-largest element present in the array. 
*/

#include<iostream>
using namespace std;
int main(){

    int arr[] = {12, 35, 1, 10, 34, 1};
    // output = {34}
    int size = sizeof(arr)/sizeof(int);
    int first, second;
    first = second = -1;

    for(int i=0;i<size;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }else if(arr[i] > second){
            second = arr[i];
        }
    }

    cout<<"second largest: "<<second<<endl;
    return 0;
}

// time complexity -> o(n)
// space complexity -> o(1)
// traversing the array twice and removing the largest one
