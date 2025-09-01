#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if(isAnagram(s, t)) {
        cout << "Yes, they are anagrams." << endl;
    } else {
        cout << "No, they are not anagrams." << endl;
    }

    return 0;
}
