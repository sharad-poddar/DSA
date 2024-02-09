/*
 * Given an array of integers, our task is to write a program that efficiently 
 * finds the second-largest element present in the array. 
*/

#include<iostream>
using namespace std;
int main(){
    
    int arr[] = {12,35, 1, 10, 34, 1};
    int size = sizeof(arr)/sizeof(int);

    int largest, slargest;
    largest = slargest = -1;

    // finding largest one
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }

    // finding second largest element
    for(int i=0;i<size;i++){
        if(slargest<arr[i] && arr[i]!=largest){
            slargest = arr[i];
        }
    }

    cout<<"sLargest: "<<slargest<<endl;
    return 0;
}

// time complexity -> o(n)
// space complexity -> o(1)

