// Name:Vishal Singla
// Roll No:1024240009
// Batch:2x11
#include <iostream>
using namespace std;

#define MAX 5

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX - 1);
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow " << x << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, val;

    do {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                if (s.isEmpty())
                    cout << "Stack is Empty.\n";
                else
                    cout << "Stack is not Empty.\n";
                break;
            case 4:
                if (s.isFull())
                    cout << "Stack is Full.\n";
                else
                    cout << "Stack is not Full.\n";
                break;
            case 5:
                s.display();
                break;
            case 6:
                s.peek();
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);

return 0;
}
// output
/*PS C:\Users\visha\OneDrive\Desktop\1024240009> cd "c:\Users\visha\OneDrive\Desktop\1024240009\" ; if ($?) { g++ q1.cpp -o q1 } ; if ($?) { .\q1 }
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 1
Enter value to push: 1
1 pushed into stack.
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 1
Enter value to push: 2
2 pushed into stack.
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 1
Enter value to push: 3
3 pushed into stack.
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 1
Enter value to push: 4
4 pushed into stack.
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 1
Enter value to push: 5
5 pushed into stack.
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 2
5 popped from stack.
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 3
Stack is not Empty.
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 4
Stack is not Full.
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 5
Stack elements: 4 3 2 1 
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 6
Top element is: 4
1. Push
2. Pop
3. isEmpty
4. isFull
5. Display
6. Peek
7. Exit
Enter your choice: 7
Exiting...
PS C:\Users\visha\OneDrive\Desktop\1024240009> */