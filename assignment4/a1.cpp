#include <bits/stdc++.h>
using namespace std;

void binary(int n) {
    queue<string> q;
    q.push("1");  // start with "1"

    for (int i = 1; i <= n; i++) {
        string s = q.front(); 
        q.pop();

        cout << s << endl;

        // generate next two numbers
        q.push(s + "0");
        q.push(s + "1");
    }
}

int main() {
    binary(5);
    return 0;
}
