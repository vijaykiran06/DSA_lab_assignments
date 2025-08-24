#include<iostream>
#include<vector>
using namespace std;
int main (){
    int rows;
    int cols;
    cout<<"enter the required no of rows and cols ";
    cin>>rows>>cols;

  vector<vector<int>>matrix(rows,vector<int>(cols));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    vector<vector<int>>transpose(cols,vector<int>(rows));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transpose[j][i]=matrix[i][j];
        }
    }

    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<transpose[i][j];
        }
    }

  }

  

}