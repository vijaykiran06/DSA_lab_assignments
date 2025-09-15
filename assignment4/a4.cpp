#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int> q;
    for (int s : students)
        q.push(s);

    int i = 0; // sandwich index
    int count = 0; // count how many students cycled without eating

    while (!q.empty() && count < q.size()) {
        if (q.front() == sandwiches[i]) {
            q.pop();
            i++;
            count = 0; // reset count since a student ate
        } else {
            // move student to back
            int student = q.front();
            q.pop();
            q.push(student);
            count++;
        }
    }
    return q.size();
}

int main() {
    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};

    cout << countStudents(students, sandwiches) << endl; // Output: 0

    return 0;
}
