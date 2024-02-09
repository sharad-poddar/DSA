/*
 * Rearrange array such that even positioned are greater than odd
 * here arrangment can be done in any order
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

    //int arr[] = {1,2,2,1};
    int arr[] = { 1, 3, 2, 2, 5 };
    // output = {1,2,1,2};
    int size = sizeof(arr)/sizeof(int);

    // checking for even positions
    for(int i=0;i<size;i+=2){
        if(arr[i]<arr[i+1]){
            swap(&arr[i], &arr[i+1]);
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}