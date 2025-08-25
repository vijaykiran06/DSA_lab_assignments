#include<iostream>
using namespace std;
int main (){
    int row,cols;
    cin>>row>>cols;
    int arr[row][cols];
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        int rowsum=0;
        for(int j=0;j<cols;j++){
            rowsum+=arr[i][j];
        }
        cout<<"row."<<i+1<<rowsum<<endl;
    }
    for(int j=0;j<cols;j++){
        int colsum=0;
        for(int i=0;i<row;i++){
colsum+=arr[i][j];
        }
        cout<<"columns."<<j+1<<colsum<<endl;
    }


}