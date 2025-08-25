#include <bits/stdc++.h>

using namespace std ;
int main(){
  vector<int >arr;
  for(int i=0;i<arr.size();i++){
    cin>>arr[i];
  }
  reverse (arr.begin(),arr.end());
  for(int i=0;i<arr.size();i++){
    cout<<arr[i];
  }
}