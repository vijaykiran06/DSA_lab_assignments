#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the queue: ";
    cin >> n;

    queue<int> q;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int half = n / 2;
    int firstHalf[half], secondHalf[half];

    for (int i = 0; i < half; i++) {
        firstHalf[i] = q.front();
        q.pop();
    }

    for (int i = 0; i < half; i++) {
        secondHalf[i] = q.front();
        q.pop();
    }
    cout << "Interleaved queue: ";
    for (int i = 0; i < half; i++) {
        cout << firstHalf[i] << " " << secondHalf[i] << " ";
    }
    if (n % 2 != 0) {
        cout << q.front();
    }

    cout << endl;
    return 0;
}