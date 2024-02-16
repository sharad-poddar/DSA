#include<iostream>
using namespace std;

int helperFun(int arr[], int low, int high){
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high){
            i++;
        }
        while(arr[j]>arr[pivot] && j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(int arr[], int low, int high){
    if(low < high){
        int PI = helperFun(arr, low, high);
        quicksort(arr, low, PI-1);
        quicksort(arr, PI+1, high);
    }
}

int main(){
    
    int arr[] = {1,2,6,5,3,4,7,8,9};
    int size = sizeof(arr)/sizeof(int);

    quicksort(arr, 0, size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}