#include<bits/stdc++.h>
using namespace std;
int main (){
    int m,n,p;
    cout<<"enter the no of rows and colsof matrixA";
    cin>>m>>n;
    cout<<"enter the no of cols of matrix B";
    cin>>p;
    vector<vector<int>>matrixa(m,vector<int>(n));
    vector<vector<int>>matrixb(n,vector<int>(p));
    vector<vector<int>>matrixc(m,vector<int>(p,0));
    cout<<"enter the 1matrix";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrixa[i][j];
        }

    }
    cout<<"enter the matrixb";
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cin>>matrixb[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<n;k++){
                matrixc[i][j]=matrixa[i][k]*matrixb[k][j];
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cout<<matrixc[i][j]<<" ";}
        cout<<endl;
    }

    
}