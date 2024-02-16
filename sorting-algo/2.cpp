#include<iostream>
#include<vector>
using namespace std;

void combineSortedArrays(int arr[], int low, int mid, int high){
    vector<int> v;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]>=arr[j]){
            v.push_back(arr[j]);
            j++;
        }else{
            v.push_back(arr[i]);
            i++;
        }
    }

    while(j<=high){
        v.push_back(arr[j]);
        j++;
    }

    while(i<=mid){
        v.push_back(arr[i]);
        i++;
    }


    for(int x=low;x<=high;x++){
        // here v is always changing so starting from lowest
        arr[x] = v[x-low];
    }
}

void mergesort(int arr[], int low, int high){
    
    if(low == high){
        return;
    }

    int mid = (low+high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);
    combineSortedArrays(arr, low, mid, high);
}

int main(){
    
    int arr[] = {1,2,6,5,3,4,7,8,9};
    int size = sizeof(arr)/sizeof(int);

    mergesort(arr, 0, size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}