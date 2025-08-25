#include<iostream>
#include<cctype>
using namespace std;
int main (){
    char ch;
    cin>>ch;
    if(islower(ch)){
        cout<<"upper case:"<<toupper(ch)<<endl;
    }
    else if (isupper(ch)){
        cout<<"lower case :"<<tolower(ch)<<endl;
    }
    else {
        cout<<"enter the charcter";
    }
}
