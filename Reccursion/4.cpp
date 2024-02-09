/**
 * minindex finder 
 * finding the index of minimum value
 * time complexity o(n)   when array is not taken
 * space complexity o(n)  when array is not taken
*/

#include<iostream>
using namespace std;
int MinIndex(int arr[], int s, int e, int MINI, int index){

    if(s>=e){
        cout<<"Value: "<<MINI<<endl;
        return index;
    }

    if(MINI > arr[s]){
        MINI=arr[s];
        index = s;
    }

    // neither return first nor last
    return MinIndex(arr, s+1, e, MINI, index);
}

int main(){

    int arr[]={10,8,3,6,1,4,9,12};
    int s=0;
    int e=sizeof(arr)/sizeof(int);
    int MINI = INT_MAX;
    int index = -1;
    index = MinIndex(arr, s, e, MINI, index);
    cout<<index<<endl;
    return 0;
}