#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,b=0,i,j;
    cout<<"Enter Number Of Elements Of Array :";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){ 
        cout<<"Enter The "<<i+1<<" Element :";
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){b++;}
        }
    }
    cout<<"Total Number Of Inversions Pairs Are :"<<b;
    return 0;
}