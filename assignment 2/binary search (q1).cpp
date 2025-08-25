#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>& arr,int target){
    int n=arr.size();
    int low=0;int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(target<arr[mid]) high=mid-1;
        else low=mid+1;
        

    }
    return -1;
}
int main (){
    int n;
    cin>>n;
    
     vector<int> arr(n);
     cout<<"enter the elements";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int target;
     cout<<"enter the required element";
     cin>>target;
     int index=binarysearch(arr,target);
     cout<<index;

}