#include<iostream>
#include<vector>
using namespace std;
void maxheap(vector<int>&arr,int i,int heapsize){
	int l=2*i+1;
	int r=2*i+2;
	int largest=i;
	if(l<heapsize&&arr[l]>arr[largest]) largest=l;
	if(r<heapsize&&arr[r]>arr[largest]) largest =r;
	if(largest !=i){
	swap(arr[i],arr[largest]);
	maxheap(arr,largest,heapsize);
	}
	return ;
 }
 int  heapextractmax(vector<int>&arr,int n){
	if(n<1) {
		cout<<"heap is underflow"<<endl;
		return INT_MIN;
	}
	int max=arr[1];
	arr[1]=arrarr[n];
	n=n-1;
	maxheap(arr,1,n);
	return max;

 }
 void printheap(vector<int>&arr,int heapsize){
	for(int x:arr){
		cout<<x<<" ";
		cout<<endl;
	}
 }
 int main (){
	vector<int>arr={ 0,50,40,30,20,10};
	int heapsize=ar.size();
	print(arr,heapsize);
	int maxelement=heapextractmax(arr,heapsize);
	cout<<maxelement<<endl;
	printheap(arr,heapsize);
	return 0;
 }