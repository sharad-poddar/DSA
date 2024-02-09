/*
 * n*m matrix is given (binary), marks row and coloumn to be if found
 * zero at any index
*/

#include<iostream>
using namespace std;

// marking -1 in row
// o(n)
void markRow(int i, int rowSize, int arr[][4]){
    for(int j=0;j<rowSize;j++){
        if(arr[i][j] == 1){
            arr[i][j] = -1;
        }
    }
}


// marking -1 in coloumn
// o(m)
void markCol(int i, int colSize, int arr[][4]){
    for(int j=0;j<colSize;j++){
        if(arr[j][i] == 1){
            arr[i][j] = -1;
        }
    }
}



int main(){

    int arr[][4] = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,0,1,1}};
    int rowSize = sizeof(arr)/sizeof(int);
    int colSize = sizeof(arr[0])/sizeof(int);

    cout<<"row size -> "<<rowSize<<endl;
    cout<<"col size -> "<<colSize<<endl;

    // i -> row
    // j -> col
    // o(n.m)
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(arr[i][j]==0){
                //o(n)
                markRow(i, rowSize, arr);
                //o(m)
                markCol(j, colSize, arr);
            }
        }
    }

    // making all -1 to 0
    // printing simultaneously
    // o(n.m)
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
            cout<<arr[i][j]<<" ";    
        }
        cout<<endl;
    }

    return 0;
}


//time complexity -> o(n.m).o(n + m) + o(n.m)