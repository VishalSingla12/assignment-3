// Name:Vishal Singla
// Roll No:1024240009
// Batch:2x11
#include <iostream>
#include <stack>
using namespace std;

int evaluate(string exp) {
    stack<int> st;
    for (char c : exp) {
        if (isdigit(c)) st.push(c - '0');
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            switch (c) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
            }
        }
    }
    return st.top();
}

int main() {
    string exp;
    cout << "Enter postfix: ";
    cin >> exp;
    cout << "Result: " << evaluate(exp) << endl;
    return 0;
}
/*output
Enter postfix: 23*4+
Result: 10
*/