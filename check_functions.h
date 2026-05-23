#include <iostream>
#include <string>
#include <cstring>
#include <limits>
using namespace std;

// Функция проверки корректности ввода целого числа 
bool IntUserInput(string input, int MinValue, int MaxValue) {
    if (input.empty())return false;

    try {
        size_t pos;
        int result = stoi(input, &pos);

        return (input.length() == pos && (result >= MinValue && result <= MaxValue));
    }
    catch (...) {
        return false;
    }
}

// Функция ввода целого числа с повторением запроса до корректного ввода
int IntEnterNumber(string label, int MinValue = numeric_limits<int>::min(), int MaxValue = numeric_limits<int>::max()) {
    string raw_input;
    cout << label;
    getline(cin, raw_input);
    while (!IntUserInput(raw_input, MinValue, MaxValue)) {
        cout << label;
        getline(cin, raw_input);
    }
    return stoi(raw_input);
}

// Функция проверки корректности ввода вещественного числа 
bool DoubleUserInput(string input, int MinValue, int MaxValue) {
    if (input.empty())return false;

    try {
        size_t pos;
        double result = stod(input, &pos);

        return (input.length() == pos && (result >= MinValue && result <= MaxValue));
    }
    catch (...) {
        return false;
    }
}

// Функция ввода вещественного числа с повторением запроса до корректного ввода
double DoubleEnterNumber(string label, int MinValue = numeric_limits<int>::min(), int MaxValue = numeric_limits<int>::max()) {
    string raw_input;
    cout << label;
    getline(cin, raw_input);
    while (!DoubleUserInput(raw_input, MinValue, MaxValue)) {
        cout << label;
        getline(cin, raw_input);
    }
    return stod(raw_input);
}

// Функция проверки корректности ввода непустой строки типа string
bool UserInputStr(string input) {
    input.erase(remove_if(input.begin(), input.end(), ::isspace), input.end());
    return !input.empty();
}

// Функция ввода строки с повторением запроса до корректного ввода
string EnterString(string label) {
    string raw_input;
    cout << label;
    getline(cin, raw_input);

    while (!UserInputStr(raw_input)) {
        cout << label;
        getline(cin, raw_input);
    }
    return raw_input;
}

// Функция проверки корректности ввода непустой строки char[]
bool UserInputArrChar(const char str[]) {
    const char* p = str;
    while (*p != '\0')
        if (*p++ != ' ') return true;
    return false;
}

// Функция ввода строки с повторением запроса до корректного ввода
void EnterArrChar(const char label[], char output[], size_t size) {
    cout << label;
    cin.getline(output, size);

    while (!UserInputArrChar(output)) {
        cout << label;
        cin.getline(output, size);
    }
}