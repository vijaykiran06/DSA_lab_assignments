#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int>&arr,int i,int n){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&arr[left]>arr[largest]) largest=left;
    if(right<n&&arr[right]>arr[largest]) largest=right;
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,largest,n);
    }
}
void buildmaxheap(vector<int>&arr,int n){
    for(int i=n/2;i>=0;i--){
        heapify(arr,i,n);

    }
}
void sortarray(vector<int>&arr,int n){
    for(int i=n-1;i>0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,0,i);
    }

}
void printheap(vector<int>&arr,int n){
    for(int x:arr)
        cout<<x<<" ";
        cout<<endl;
    
    return ;
}
int main (){
    vector<int>arr={10,3,566,4,5,7,8,55,22};
    buildmaxheap(arr,arr.size());
    sortarray(arr,arr.size());
    printheap(arr,arr.size());
    return 0;
}