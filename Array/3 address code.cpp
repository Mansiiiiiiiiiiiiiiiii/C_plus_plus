#include <iostream>
using namespace std;

int tempVar = 1;

// Function to generate 3-address code
void generateTAC(string expr) {
    string op1, op2, op;
    int i = 0;
    while (i < expr.length()) {
        if (isalnum(expr[i])) {
            cout << "t" << tempVar << " = " << expr[i] << endl;
            op1 = "t" + to_string(tempVar++);
        } else {
            op = expr[i];
            op2 = op1;
            i++;
            if (isalnum(expr[i])) {
                op1 = "t" + to_string(tempVar++);
                cout << "t" << tempVar - 1 << " = " << expr[i] << endl;
            }
            cout << "t" << tempVar << " = " << op2 << " " << op << " " << op1 << endl;
            op1 = "t" + to_string(tempVar++);
        }
        i++;
    }
}

int main() {
    string expr;
    cout << "Enter a regular expression: ";
    cin >> expr;
    cout << "Three Address Code:\n";
    generateTAC(expr);
    return 0;
}

