#include<iostream>
#include<vector>
using namespace std ;
int main (){
    int n;
    cin>>n;
    vector<int>arr(n-1);
    int j=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(arr[i]!=j){
        cout<<"missing letter:"<<j;
        return 0;
      }
      j++;
    
    }
    return n;
}