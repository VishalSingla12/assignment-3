// Name:Vishal Singla
// Roll No:1024240009
// Batch:2x11
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string exp) {
    stack<char> st;
    for (char c : exp) {
        if (c == '(' || c == '[' || c == '{') st.push(c);
        else {
            if (st.empty()) return false;
            if ((c == ')' && st.top() != '(') ||
                (c == ']' && st.top() != '[') ||
                (c == '}' && st.top() != '{')) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string exp;
    cout << "Enter expression: ";
    cin >> exp;
    if (isBalanced(exp)) cout << "Balanced\n";
    else cout << "Not Balanced\n";
    return 0;
}
/*output
Enter expression: hello[bye{)
Not Balanced
Enter expression: ({})
Balanced
*/