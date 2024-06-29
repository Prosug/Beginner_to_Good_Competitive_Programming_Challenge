#include <iostream>
#include <string>
#include <stack>
#include <stdexcept>
#include <sstream>
#include <cctype>

using namespace std;

// Function to transform the bracket sequence into the arithmetic expression
string transformSequence(const string &bracketSequence) {
    string transformed;
    int n = bracketSequence.size();
    
    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            if (bracketSequence[i - 1] == ')' && bracketSequence[i] == '(') {
                transformed += "*";
            } else if (bracketSequence[i - 1] == '(' && bracketSequence[i] == ')') {
                transformed += "1";
            } else if (bracketSequence[i - 1] == ')' && bracketSequence[i] == ')') {
                transformed += "+1";
            }
        }
        transformed += bracketSequence[i];
    }
    
    return transformed;
}

// Helper function to evaluate the arithmetic expression
int evaluateExpression(const string &expression) {
    istringstream iss(expression);
    stack<int> numbers;
    stack<char> ops;

    auto applyOp = [](int a, int b, char op) -> int {
        switch (op) {
            case '+': return a + b;
            case '*': return a * b;
            default: throw runtime_error("Unknown operator");
        }
    };

    int num = 0;
    char op = 0;
    while (iss >> ws) {
        if (isdigit(iss.peek())) {
            iss >> num;
            numbers.push(num);
        } else {
            iss >> op;
            if (op == ')') {
                while (!ops.empty() && ops.top() != '(') {
                    int b = numbers.top(); numbers.pop();
                    int a = numbers.top(); numbers.pop();
                    char current_op = ops.top(); ops.pop();
                    numbers.push(applyOp(a, b, current_op));
                }
                ops.pop(); // pop '('
            } else {
                ops.push(op);
            }
        }
    }

    while (!ops.empty()) {
        int b = numbers.top(); numbers.pop();
        int a = numbers.top(); numbers.pop();
        char current_op = ops.top(); ops.pop();
        numbers.push(applyOp(a, b, current_op));
    }

    return numbers.top();
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
    string bracketSequence = "((())())()";
    
    // Transform the sequence
    string transformedSequence = transformSequence(bracketSequence);
    cout << "Transformed Sequence: " << transformedSequence << endl;
    
    // Evaluate the transformed sequence
    int result = evaluateExpression(transformedSequence);
    cout << "Result: " << result << endl;

    return 0;
}
