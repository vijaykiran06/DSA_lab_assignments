#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverse(string str) {
    stack<char> s;
    for(char c : str) {
        s.push(c);
    }
    string reversed = "";
    while(!s.empty()) {
        reversed += s.top();
        s.pop();
    }
    return reversed;
}
int main() {
    string str = "DataStructure";
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reverse(str) << endl;
    return 0;
}
