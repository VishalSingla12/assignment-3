// Name:Vishal Singla
// Roll No:1024240009
// Batch:2x11
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s, rev = "";
    cout << "Enter string: ";
    cin >> s;

    stack<char> st;
    for (char c : s) st.push(c);
    while (!st.empty()) {
        rev += st.top();
        st.pop();
    }

    cout << "Reversed string: " << rev << endl;
    return 0;
}
/*output
Enter string: hello
Reversed string: olleh*/
