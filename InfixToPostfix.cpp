#include <iostream>
#include <string>
#include <stack>
using namespace std;

int priority(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

string insertMultiplication(string infix) {
    string result = "";
    for (int i = 0; i < infix.length(); i++) {
        result = result + infix[i];
        if ((isdigit(infix[i]) || infix[i] == ')') && 
            i + 1 < infix.length() && 
            (infix[i+1] == '(' || isdigit(infix[i+1]))) {
            result = result + '*';
        }
    }
    return result;
}

string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for(int i = 0; i < infix.length(); i++) {
        char ch = infix[i];
        
        if(isalnum(ch)) {
            postfix = postfix + ch;
        }
        else if(ch == '(') {
            st.push(ch);
        }
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                postfix = postfix + st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && priority(st.top()) >= priority(ch)) {
                postfix = postfix + st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.empty()) {
        postfix = postfix + st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter valid infix: ";
    cin >> infix;

    string fixedInfix = insertMultiplication(infix);
    cout << "Fixed Infix: " << fixedInfix << endl;
    cout << "Postfix: " << infixToPostfix(fixedInfix) << endl;
    
    return 0;
}
