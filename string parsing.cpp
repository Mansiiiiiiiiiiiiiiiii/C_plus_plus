#include <iostream>
#include <stack>
#include <map>
using namespace std;

map<char, map<char, string>> parsingTable;

void constructTable() {
    parsingTable['E']['i'] = "TX";
    parsingTable['X']['+'] = "+TX";
    parsingTable['X']['$'] = "";
    parsingTable['T']['i'] = "FY";
    parsingTable['Y']['+'] = "";
    parsingTable['Y']['*'] = "*FY";
    parsingTable['Y']['$'] = "";
    parsingTable['F']['i'] = "i";
}

bool parseString(string input) {
    stack<char> st;
    st.push('$'); st.push('E');
    input += '$';
    int i = 0;
    while (!st.empty()) {
        char top = st.top(); st.pop();
        if (top == input[i]) i++;
        else if (isupper(top)) {
            string rule = parsingTable[top][input[i]];
            if (rule.empty()) return false;
            for (int j = rule.size() - 1; j >= 0; j--) if (rule[j] != ' ') st.push(rule[j]);
        } else return false;
    }
    return i == input.size();
}

int main() {
    constructTable();
    string input;
    cout << "Enter input string: ";
    cin >> input;
    cout << (parseString(input) ? "Accepted" : "Rejected") << endl;
    return 0;
}

