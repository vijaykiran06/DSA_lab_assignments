#include <iostream>
#include <queue>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    queue<char> q;
    int freq[256] = {0};  

    cout << "First non-repeating characters: ";

    for (char ch : str) {
        if (ch == ' ') continue;

        freq[ch]++;    
        q.push(ch);      
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }
        if (!q.empty())
            cout << q.front() << " ";
        else
            cout << -1 << " ";
    }

    cout << endl;
    return 0;
}