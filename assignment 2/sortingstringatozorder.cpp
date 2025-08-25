#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main (){
    string s[100];
    int n;
    cout<<"enter the no of strings ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);

     cout << "\nStrings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;


    }
}
