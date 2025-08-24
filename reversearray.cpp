#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector <int> ara(n);
    for(int i=0;i<n;i++)
    cin>>ara[i];

    int s=0,e=ara.size()-1;
    while(s<e){
        swap(ara[s++],ara[e--]);
    }
      for (int i = 0; i < n; i++) {
        cout << ara[i] << " ";
    }
    cout << endl;
}