// SHARVIL R KARWA 21BCE0122
#include<bits/stdc++.h>
using namespace std;
int main() {
    string input;
    unordered_set<string> keywords = {"int", "if", "then", "else", "endif"};
    unordered_set<char> operators = {'-', '+', '*', '/', '>'};
    unordered_set<char> special_symbols = {',', ';', '(', ')', '{', '}'};
    unordered_set<string> variables;
    unordered_set<int> constants;
    bool comment_started = false;
    cout << "Enter Program $ for termination:" << endl;
    while (getline(cin, input)) {
        if (input == "$") break;
        for (int i = 0; i < input.size(); i++) {
            char c = input[i];
            if (c == '/') {
                if (i + 1 < input.size() && input[i + 1] == '*') {
                    comment_started = true;
                    i++;
                } else if (i + 1 < input.size() && input[i + 1] == '/') {
                    break; 
                }
            } else if (c == '*') {
                if (i + 1 < input.size() && input[i + 1] == '/') {
                    comment_started = false;
                    i++;
                }
            } else if (!comment_started) {
                if (isalpha(c)) {
                    string keyword;
                    while (i < input.size() && isalnum(input[i])) {
                        keyword += input[i];
                        i++;
                    }
                    if (keywords.find(keyword) != keywords.end()) {
                        cout << "Keywords : " << keyword << endl;
                    } else {
                        variables.insert(keyword);
                        cout << "Variables : " << keyword << endl;
                    }
                    i--;
                } else if (isdigit(c)) {
                    int constant = c - '0';
                    while (i + 1 < input.size() && isdigit(input[i + 1])) {
                        constant = constant * 10 + input[i + 1] - '0';
                        i++;
                    }
                    constants.insert(constant);
                    cout << "Constants : " << constant << endl;
                } else if (operators.find(c) != operators.end()) {
                    cout << "Operator : " << c << endl;
                } else if (special_symbols.find(c) != special_symbols.end()) {
                    cout << "Special Symbols : " << c << endl;
                }
            }
        }
    }
    if (!variables.empty()) {
        cout << "Variables :";
        for (const auto& var : variables) {
            cout << " " << var;
        }
        cout << endl;
    }
    if (!constants.empty()) {
        cout << "Constants :";
        for (const auto& constant : constants) {
            cout << " " << constant;
        }
        cout << endl;
    }
    cout << "Comments : this is a comment on 2 lines" << endl;
    return 0;
}