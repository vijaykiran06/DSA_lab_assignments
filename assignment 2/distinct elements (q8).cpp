#include<iostream>
#include<vector>
using namespace std;
  int distinct(int arr[],int n){
    int count=1;

    for(int j=0;j<n;j++){
        if(arr[j]!=arr[j-1]){
            count++;
        }
    }
    return count;

}
int main (){
    int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 distinct(arr,n);

}
