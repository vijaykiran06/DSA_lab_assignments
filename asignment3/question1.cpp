#include <iostream>
using namespace std;

class Stack {
    int size;
    int* arr;
    int top;
public:
    Stack(int s = 100) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << x << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack." << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop." << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek(int pos) {
        if (pos <= 0 || pos > top + 1) {
            cout << "Invalid position!" << endl;
            return -1;
        }
        return arr[top - pos + 1]; // position counted from top
    }

    int Top() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(10); // stack of size 10
    int choice, value, pos;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (at position)\n";
        cout << "4. Top element\n";
        cout << "5. isEmpty\n";
        cout << "6. isFull\n";
        cout << "7. Display\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            cout << "Popped element: " << s.pop() << endl;
            break;

        case 3:
            cout << "Enter position from top: ";
            cin >> pos;
            cout << "Element at position " << pos << ": " << s.peek(pos) << endl;
            break;

        case 4:
            cout << "Top element: " << s.Top() << endl;
            break;

        case 5:
            cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
            break;

        case 6:
            cout << (s.isFull() ? "Stack is full" : "Stack is not full") << endl;
            break;

        case 7:
            s.display();
            break;

        case 8:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 8);

    return 0;
}
