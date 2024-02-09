/*
 * Given an array of random numbers, Push all the zero’s of a given array 
 * to the end of the array, The order of all other elements should be same. 
 * Expected time complexity is O(n) and extra space is O(1).
*/

#include<iostream>
using namespace std;

void swap(int *temp1, int *temp2){
    int temp;
    temp = *temp1;
    *temp1 = *temp2;
    *temp2 = temp;
}

int main(){

    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    // output = {1,2,4,3,5,0,0,0};
    int size = sizeof(arr)/sizeof(int);

    int j;
    j=0;

    // two pointer system
    for(int i=0;i<size;i++){
        if(arr[i] != 0){
            swap(&arr[i], &arr[j]);
            j++;
        }
    } 
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// time complexity -> o(n)
// space complexity -> o(1)
// solve this by making another array

